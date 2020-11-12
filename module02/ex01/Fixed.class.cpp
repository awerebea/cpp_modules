/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 13:07:38 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/12 11:06:36 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : _val(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &a) {
	std::cout << "Copy constructor called" << std::endl;
	*this = a;
}

Fixed::Fixed(const int inum) {
	std::cout << "Int constructor called" << std::endl;
	this->_val = inum << this->_fract_bits;
}

Fixed::Fixed(const float fnum) {
	std::cout << "Float constructor called" << std::endl;
	this->_val = roundf(fnum * (1 << this->_fract_bits));
}

Fixed			&Fixed::operator=(const Fixed &a) {
	std::cout << "Assignation operator called" << std::endl;
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

std::ostream	&operator<<(std::ostream& out, const Fixed &a) {
	out << a.toFloat();
	return (out);
}
