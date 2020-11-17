/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 16:22:08 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/17 13:20:23 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "Default FragTrap constructor is called\n";
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_name = "Unnamed";
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Parametric FragTrap constructor is called\n";
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_name = name;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor FragTrap is called\n";
}

FragTrap::FragTrap(const FragTrap &a)
{
	std::cout << "Copy FragTrap constructor is called\n";
	*this = a;
}

FragTrap &			FragTrap::operator=(const FragTrap &a)
{
	std::cout << "Equal FragTrap operator is called\n";
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

void		FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	static const int			vhAttackTypeCount = 5;
	static const std::string	vhAttackTypes[vhAttackTypeCount] = \
	{
		"Big Bazoo",
		"Rubber knife",
		"Water pistol",
		"Snowball",
		"Nuclear bomb"
	};

	if ((_energyPoints -= 25) >= 0)
	{
		std::cout << "FR4G-TP " << COLOR_GREEN_BOLD << _name << COLOR_RESET
			<< " attacks " << COLOR_YELLOW_BOLD << target << COLOR_RESET
			<< " with "
			<< COLOR_RED_BOLD
			<< vhAttackTypes[rand() % vhAttackTypeCount]
			<< COLOR_RESET << "\n";
	}
	else
	{
		_energyPoints = 0;
		std::cout << "FR4G-TP " << COLOR_GREEN_BOLD << _name << COLOR_RESET
			<< " has not enough energy for attack "
			<< COLOR_YELLOW_BOLD << target << COLOR_RESET << "!\n";
	}
}
