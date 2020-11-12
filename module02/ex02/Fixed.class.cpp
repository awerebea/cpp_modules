/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 13:07:38 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/12 11:01:07 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : _val(0) {}

Fixed::~Fixed() {}

Fixed::Fixed(const Fixed &a) {
	*this = a;
}

Fixed::Fixed(const int inum) {
	this->_val = inum << this->_fract_bits;
}

Fixed::Fixed(const float fnum) {
	this->_val = roundf(fnum * (1 << this->_fract_bits));
}

Fixed			&Fixed::operator=(const Fixed &a) {
	if (this != &a)
		this->_val = a.getRawBits();
	return (*this);
}

int				Fixed::getRawBits(void) const {
	return (this->_val);
}

void			Fixed::setRawBits(int const raw) {
	this->_val = raw;
}

float			Fixed::toFloat(void) const {
	return ((float)this->_val / (float)(1 << this->_fract_bits));
}

int				Fixed::toInt(void) const {
	return (this->_val >> this->_fract_bits);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &a) {
	out << a.toFloat();
	return (out);
}

bool			Fixed::operator>(const Fixed &a) const {
	return ((this->_val > a.getRawBits()) ? true : false);
}

bool			Fixed::operator<(const Fixed &a) const {
	return ((this->_val < a.getRawBits()) ? true : false);
}

bool			Fixed::operator>=(const Fixed &a) const {
	return ((this->_val >= a.getRawBits()) ? true : false);
}

bool			Fixed::operator<=(const Fixed &a) const {
	return ((this->_val <= a.getRawBits()) ? true : false);
}

bool			Fixed::operator==(const Fixed &a) const {
	return ((this->_val == a.getRawBits()) ? true : false);
}

bool			Fixed::operator!=(const Fixed &a) const {
	return ((this->_val != a.getRawBits()) ? true : false);
}

Fixed			Fixed::operator+(const Fixed &a) const {
	Fixed		ret;

	ret.setRawBits(this->_val + a.getRawBits());
	return (ret);
}

Fixed			Fixed::operator-(const Fixed &a) const {
	Fixed		ret;

	ret.setRawBits(this->_val - a.getRawBits());
	return (ret);
}

Fixed			Fixed::operator*(const Fixed &a) const {
	return ((Fixed)(this->toFloat() * a.toFloat()));
}

Fixed			Fixed::operator/(const Fixed &a) const {
	return ((Fixed)(this->toFloat() / a.toFloat()));
}

Fixed			&Fixed::operator++() {
	++this->_val;
	return (*this);
}

Fixed			Fixed::operator++(int) {
	Fixed		ret(*this);
	++this->_val;
	return (ret);
}

Fixed			&Fixed::operator--() {
	--this->_val;
	return (*this);
}

Fixed			Fixed::operator--(int) {
	Fixed		ret(*this);
	--this->_val;
	return (ret);
}

Fixed			&Fixed::min(Fixed &a, Fixed &b) {
	return ((a < b) ? a : b);
}

Fixed const		&Fixed::min(Fixed const &a, Fixed const &b) {
	return ((a < b) ? a : b);
}

Fixed			&Fixed::max(Fixed &a, Fixed &b) {
	return ((a > b) ? a : b);
}

Fixed const		&Fixed::max(Fixed const &a, Fixed const &b) {
	return ((a > b) ? a : b);
}
