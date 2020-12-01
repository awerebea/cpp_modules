/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conv.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 15:10:11 by awerebea          #+#    #+#             */
/*   Updated: 2020/12/01 20:28:10 by awerebea         ###   ########.fr       */
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
	int						_flags[4];	// [0] - char,  [1] - int,
										// [2] - float, [3] - double
							// 0 - normal, 1 - incorrect/overflow (impossible),
							// 2 - +inf, 3 - -inf, 4 - nan, 5 - non displ.
	char					_c;
	int						_i;
	float					_f;
	double					_d;

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

	int const *				getFlags() const;

	char					getChar() const;
	int						getInt() const;
	float					getFloat() const;
	double					getDouble() const;
};

std::ostream &				operator<<(std::ostream &, Conv const &);

#endif
