/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conv.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 15:19:08 by awerebea          #+#    #+#             */
/*   Updated: 2020/12/05 19:12:29 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conv.hpp"

Conv::Conv(const char * s) : _s(s)
{
	for (int i = 0; i < 4; i++)
		_flags[i] = 0;
	pseudoLiteral();
	if (!_flags[0])
	{
		parser();
	}
}

Conv::~Conv() {}

Conv::Conv(Conv const & a)
{
	*this = a;
}

Conv &			Conv::operator=(Conv const & a)
{
	if (this != &a)
	{
		_s = a._s;
	}
	return (*this);
}

void			Conv::pseudoLiteral()
{
	if (_s == "+inf") {
		for (int i = 0; i < 4; i++) _flags[i] = 2;
		_d = std::numeric_limits<float>::infinity();
		fromDouble();
	}
	else if (_s == "+inff") {
		for (int i = 0; i < 4; i++) _flags[i] = 2;
		_f = std::numeric_limits<float>::infinity();
		fromFloat();
	}
	else if (_s == "-inf") {
		for (int i = 0; i < 4; i++) _flags[i] = 3;
		_d = -std::numeric_limits<float>::infinity();
		fromDouble();
	}
	else if (_s == "-inff") {
		for (int i = 0; i < 4; i++) _flags[i] = 3;
		_f = -std::numeric_limits<float>::infinity();
		fromFloat();
	}
	else if (_s == "nan") {
		for (int i = 0; i < 4; i++) _flags[i] = 4;
		_d = std::numeric_limits<float>::quiet_NaN();
		fromDouble();
	}
	else if (_s == "nanf") {
		for (int i = 0; i < 4; i++) _flags[i] = 4;
		_f = std::numeric_limits<float>::quiet_NaN();
		fromFloat();
	}
}

int				checkStr(std::string const & s, int len)
// return values: 0 - invalid string, 1 - int, 2 - float, 3 - double
{
	int			dotFlag = 0;

	for (int i = 0; i < len; ++i)
	{
		if (!i && !(std::isdigit(s[0]) || s[0] == '-' || s[0] == '+'))
			return (0);
		else if (i == 1 && (s[0] == '-' || s[0] == '+') && !std::isdigit(s[1]))
			return (0);
		else if (s[i] == '.')
		{
			if (dotFlag || i == len - 1)
				return (0);
			dotFlag = 1;
		}
		else if (i && !std::isdigit(s[i]) && !(i == len - 1 && s[i] == 'f' && \
					std::isdigit(s[i - 1]) && dotFlag))
			return (0);
	}
	if (!dotFlag)
		return (1);
	return (s[len - 1] == 'f' ? 2 : 3);
}

int				checkOverflow(long double num, int * _flags, int type)
{
	if (type == 1 && \
		((num < std::numeric_limits<int>::min() || \
		num > std::numeric_limits<int>::max())))
		{
			for (int i = 0; i < 4; i++) { _flags[i] = 1; }
			return (1);
		}
	else if (type == 2 && \
		((std::fabs(num) < std::fabs(std::numeric_limits<float>::min()) || \
		std::fabs(num) > std::fabs(std::numeric_limits<float>::max()))))
		{
			for (int i = 0; i < 4; i++) { _flags[i] = 1; }
			return (1);
		}
	else if (type == 3 && \
		((std::fabs(num) < std::fabs(std::numeric_limits<double>::min()) || \
		std::fabs(num) > std::fabs(std::numeric_limits<double>::max()))))
		{
			for (int i = 0; i < 4; i++) { _flags[i] = 1; }
			return (1);
		}
	return (0);
}

void			Conv::parser()
{
	int			len = _s.length();
	int			type = 0;

	if (len == 1 && !std::isdigit(_s[0])) {
		_c = _s[0];
		fromChar();
	}
	else if (!(type = checkStr(_s, len)))
	{
		for (int i = 0; i < 4; i++) _flags[i] = 1;
		return ;
	}
	if (type == 1 && !checkOverflow(std::stold(_s), _flags, type))
	{
		_i = std::stoi(_s);
		fromInt();
	}
	else if (type == 2 && !checkOverflow(std::stold(_s), _flags, type))
	{
		_f = std::stof(_s);
		fromFloat();
	}
	else if (type == 3 && !checkOverflow(std::stold(_s), _flags, type))
	{
		_d = std::stod(_s);
		fromDouble();
	}
}

void			Conv::fromChar()
{
	_i = static_cast<int>(_c);
	_f = static_cast<float>(_c);
	_d = static_cast<double>(_c);
}

void			Conv::fromInt()
{
	_f = static_cast<float>(_i);
	_d = static_cast<double>(_i);

	if (_i >= 32 && _i <= 126)
		_c = static_cast<char>(_i);
	else if (!_flags[0] && _i >= 0 && _i <= 127)
		_flags[0] = 5;
	else
		_flags[0] = 1;
}

void			Conv::fromFloat()
{
	_i = static_cast<int>(_f);
	_d = static_cast<double>(_f);

	if (_i >= 32 && _i <= 126)
		_c = static_cast<char>(_f);
	else if (!_flags[0] && _i >= 0 && _i <= 127)
		_flags[0] = 5;
	else
		_flags[0] = 1;
}

void			Conv::fromDouble()
{
	_i = static_cast<int>(_d);
	if (_d > std::numeric_limits<float>::max())
		_flags[2] = 2;
	_f = static_cast<float>(_d);

	if (_i >= 32 && _i <= 126)
		_c = static_cast<char>(_d);
	else if (!_flags[0] && _i >= 0 && _i <= 127)
		_flags[0] = 5;
	else
		_flags[0] = 1;
}

int const *		Conv::getFlags() const { return (_flags); }

char			Conv::getChar() const { return (_c); }

int				Conv::getInt() const { return (_i); }

float			Conv::getFloat() const { return (_f); }

double			Conv::getDouble() const { return (_d); }

std::ostream &	operator<<(std::ostream &out, Conv const & a)
{
	const int *		flags = a.getFlags();

	std::cout.precision(1);
	out << std::setiosflags(std::ios::fixed);
	out << "char: ";
	if (flags[0])
		out << (flags[0] < 5 ? "impossible" : "Non displayable");
	else
		out << "'" << a.getChar() << "'";
	out << std::endl;
	out << "int: ";
	(flags[1] ? out << "impossible" : out << a.getInt());
	out << std::endl;
	out << "float: ";
	if (flags[2] == 1)
		out << "impossible";
	else
	{
		if (flags[2] == 2)
			out << "+";
		out << a.getFloat() << "f";
	}
	out << std::endl;
	out << "double: ";
	if (flags[3] == 1)
		out << "impossible";
	else
	{
		if (flags[3] == 2)
			out << "+";
		out << a.getDouble();
	}
	out << std::endl;
	return (out);
}
