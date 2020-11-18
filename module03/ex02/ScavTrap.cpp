/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 18:26:19 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/18 15:51:48 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Default ScavTrap constructor is called\n";
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_level = 1;
	_name = "Unnamed";
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Parametric ScavTrap constructor is called\n";
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_level = 1;
	_name = name;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor ScavTrap is called\n";
}

ScavTrap::ScavTrap(const ScavTrap &a)
{
	std::cout << "Copy ScavTrap constructor is called\n";
	*this = a;
}

ScavTrap &			ScavTrap::operator=(const ScavTrap &a)
{
	std::cout << "Equal ScavTrap operator is called\n";
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

void		ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << COLOR_CYAN_BOLD << "SC4V-TP " << COLOR_RESET;
	ClapTrap::rangedAttack(target);
}

void		ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << COLOR_CYAN_BOLD << "SC4V-TP " << COLOR_RESET;
	ClapTrap::meleeAttack(target);
}

void		ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << COLOR_CYAN_BOLD << "SC4V-TP " << COLOR_RESET;
	ClapTrap::takeDamage(amount);
}

void		ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << COLOR_CYAN_BOLD << "SC4V-TP " << COLOR_RESET;
	ClapTrap::beRepaired(amount);
}

void		ScavTrap::challengeNewcomer(void)
{
	static const int			challengesCount = 5;
	static const std::string	challengesSet[challengesCount] = \
	{
		"Make a breakfast",
		"Find a mushroom",
		"Take a shower",
		"Save the Planet",
		"Win world football championship"
	};

	std::cout << COLOR_CYAN_BOLD << "SC4V-TP " << COLOR_RESET
		<< COLOR_GREEN_BOLD << _name << COLOR_RESET
		<< " takes "
		<< COLOR_YELLOW_BOLD << challengesSet[rand() % challengesCount]
		<< COLOR_RESET << " challenge!\n";
}
