/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 18:05:36 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/17 19:18:50 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap()
{
	std::cout << "Default NinjaTrap constructor is called\n";
	_hitPoints = 60;
	_maxHitPoints = 60;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_level = 1;
	_name = "Unnamed";
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_armorDamageReduction = 0;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Parametric NinjaTrap constructor is called\n";
	_hitPoints = 60;
	_maxHitPoints = 60;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_level = 1;
	_name = name;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_armorDamageReduction = 0;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "Destructor NinjaTrap is called\n";
}

NinjaTrap::NinjaTrap(const NinjaTrap &a)
{
	std::cout << "Copy NinjaTrap constructor is called\n";
	*this = a;
}

NinjaTrap &			NinjaTrap::operator=(const NinjaTrap &a)
{
	std::cout << "Equal NinjaTrap operator is called\n";
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

void				NinjaTrap::ninjaShoebox(FragTrap &a)
{
	std::cout << "Ninja " << COLOR_GREEN_BOLD << _name << COLOR_RESET
		<< " attacks FR4G-TP at melee with "
		<< COLOR_RED_BOLD << _meleeAttackDamage << COLOR_RESET
		<< " amount of damage\n";
	a.takeDamage(_meleeAttackDamage);
}

void				NinjaTrap::ninjaShoebox(ScavTrap &a)
{
	std::cout << "Ninja " << COLOR_GREEN_BOLD << _name << COLOR_RESET
		<< " attacks SC4V-TP at range with "
		<< COLOR_RED_BOLD << _rangedAttackDamage << COLOR_RESET
		<< " amount of damage\n";
	a.takeDamage(_rangedAttackDamage);
}

void				NinjaTrap::ninjaShoebox(ClapTrap &a)
{
	std::cout << "Ninja " << COLOR_GREEN_BOLD << _name << COLOR_RESET
		<< " repairs ClapTrap with "
		<< COLOR_BLUE_BOLD << _energyPoints / 2 << COLOR_RESET << " HP\n";
	a.beRepaired(_energyPoints / 2);
}

void				NinjaTrap::ninjaShoebox(NinjaTrap &a)
{
	std::cout << "Ninja " << COLOR_GREEN_BOLD << _name << COLOR_RESET
		<< " diagnose NINJ4-TP " << COLOR_YELLOW_BOLD << a._name << COLOR_RESET
		<< "\n";
}
