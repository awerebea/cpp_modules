/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 15:26:37 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/11 14:48:48 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{}

HumanA::~HumanA() {}

void	HumanA::attack() const
{
	std::cout	<< this->_name << " attacks with his " \
				<< this->_weapon.getType() << std::endl;
}
