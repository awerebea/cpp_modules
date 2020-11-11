/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 13:07:10 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/11 23:51:02 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>

class Fixed {
	int					_val;
	static const int	_fract_bits = 8;
public:
	Fixed();
	Fixed(const Fixed &a);
	Fixed(const int inum);
	Fixed(const float fnum);
	~Fixed();
	Fixed				&operator=(const Fixed &a);
	int					getRawBits(void) const;
	void				setRawBits(int const raw);
	float				toFloat(void) const;
	int					toInt(void) const;
	bool				operator>(const Fixed &a) const;
	bool				operator<(const Fixed &a) const;
	bool				operator>=(const Fixed &a) const;
	bool				operator<=(const Fixed &a) const;
	bool				operator==(const Fixed &a) const;
	bool				operator!=(const Fixed &a) const;
	Fixed				operator+(const Fixed &a) const;
	Fixed				operator-(const Fixed &a) const;
	Fixed				operator*(const Fixed &a) const;
	Fixed				operator/(const Fixed &a) const;
	Fixed				&operator++();
	Fixed				operator++(int);
	Fixed				&operator--();
	Fixed				operator--(int);
	static Fixed		&min(Fixed &a, Fixed &b);
	static Fixed const	&min(Fixed const &a, Fixed const &b);
	static Fixed		&max(Fixed &a, Fixed &b);
	static Fixed const	&max(Fixed const &a, Fixed const &b);
};

std::ostream&			operator<<(std::ostream &out, const Fixed &a);

#endif
