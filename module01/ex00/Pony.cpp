/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 16:03:05 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/05 17:13:03 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

Pony::Pony(std::string name) : _name(name) {
	std::cout << "Pony object created" << std::endl;
}

Pony::~Pony() {
	std::cout << "Pony object destroyed" << std::endl;
}

void	Pony::sayHello() const {
	std::cout	<< "Hello! I'm the Pony, my name is " << _name << "." \
				<< std::endl;
}
