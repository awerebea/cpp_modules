/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 17:57:03 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/21 20:13:56 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << COLOR_YELLOW_BOLD "Gaaah. Me want smash heads!" << COLOR_RESET
		<< std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << COLOR_RED_BOLD << "Aaargh..." << COLOR_RESET
		<< std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &a) :
	Enemy(a.getHP(), a.getType())
{
	*this = a;
}

SuperMutant &			SuperMutant::operator = (const SuperMutant &a)
{
	if (this != &a)
		Enemy::operator = (a);
	return (*this);
}

void				SuperMutant::takeDamage(int amount)
{
	Enemy::takeDamage(amount - 3);
}
