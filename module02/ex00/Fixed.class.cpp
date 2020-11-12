/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 13:07:38 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/12 11:04:17 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>

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

Fixed			&Fixed::operator=(const Fixed &a) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &a)
		this->_val = a.getRawBits();
	return (*this);
}

int				Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_val);
}

void			Fixed::setRawBits(int const raw) {
	this->_val = raw;
}
