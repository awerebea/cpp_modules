/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conv.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 15:10:11 by awerebea          #+#    #+#             */
/*   Updated: 2020/12/06 12:45:00 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONV_HPP
# define CONV_HPP

# include <iostream>
# include <iomanip>
# include <cmath>
# include <limits>

class						Conv
{
	std::string				_s;
	char					_c;
	int						_i;
	float					_f;
	double					_d;
	char					_flags; // 0b00000000 (0) - normal,
									// 0b00000001 (1) - incorrect/overflow,
									// 0b00000010 (2) - +inf,
									// 0b00000100 (4) - -inf,
									// 0b00001000 (8) - nan,
									// 0b00010000 (16) - non displayable,
									// 0b00100000 (32) - dot in number,
									// 0b01000000 (64) - overflow casted char

	void					pseudoLiteral();
	void					parser();

	void					fromChar();
	void					fromInt();
	void					fromFloat();
	void					fromDouble();
public:
							Conv();
							Conv(const char *);
							Conv(Conv const & a);
							~Conv();

	Conv &					operator=(Conv const & a);

	char const &			getFlags() const;

	char					getChar() const;
	int						getInt() const;
	float					getFloat() const;
	double					getDouble() const;
};

std::ostream &				operator<<(std::ostream &, Conv const &);

#endif
