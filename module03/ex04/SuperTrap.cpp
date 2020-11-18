/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 18:05:36 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/18 18:32:16 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : FragTrap(), NinjaTrap()
{
	std::cout << "Parametric SuperTrap constructor is called\n";
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_level = 1;
	_name = "Unnamed";
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
}

SuperTrap::SuperTrap(std::string name) : FragTrap(name), NinjaTrap(name)
{
	std::cout << "Parametric SuperTrap constructor is called\n";
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_level = 1;
	_name = name;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
}

SuperTrap::~SuperTrap()
{
	std::cout << "Destructor SuperTrap is called\n";
}

SuperTrap::SuperTrap(const SuperTrap &a) : FragTrap(a), NinjaTrap(a)
{
	std::cout << "Copy SuperTrap constructor is called\n";
	*this = a;
}

SuperTrap &			SuperTrap::operator=(const SuperTrap &a)
{
	std::cout << "Equal SuperTrap operator is called\n";
	if (this != &a)
	{
		_hitPoints = a._hitPoints;
		_maxHitPoints = a._maxHitPoints;
		_energyPoints = a._energyPoints;
		_maxEnergyPoints = a._maxEnergyPoints;
		_level = a._level;
		_name = a._name;
		_meleeAttackDamage = a._meleeAttackDamage;
		_rangedAttackDamage = a._rangedAttackDamage;
		_armorDamageReduction = a._armorDamageReduction;
	}
	return (*this);
}

void		SuperTrap::takeDamage(unsigned int amount)
{
	std::cout << COLOR_CYAN_BOLD << "5UPER-TP " << COLOR_RESET;
	ClapTrap::takeDamage(amount);
}

void		SuperTrap::beRepaired(unsigned int amount)
{
	std::cout << COLOR_CYAN_BOLD << "5UPER-TP " << COLOR_RESET;
	ClapTrap::beRepaired(amount);
}
