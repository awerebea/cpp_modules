/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 17:41:10 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/06 12:06:18 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

const std::string Zombie::_types[] = {"Deaf", "Blind", "Strong", "Fast"};

Zombie::Zombie(std::string name ,int type) : _name(name), _type(type) {}

Zombie::~Zombie() {
	std::cout << "\033[21;31mZombie destroyed\033[0m" << std::endl;
}

void	Zombie::announce() {

	std::cout	<< "<\033[1;32m" << this->_name << "\033[0m \033[1;34m(" \
				<< this->_types[this->_type] \
				<< "\033[0m)> Braiiiiiiinnnssss..." << std::endl;
}
