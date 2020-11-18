/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 18:26:19 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/18 15:58:42 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
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

ScavTrap::ScavTrap(std::string name)
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
	std::cout << COLOR_CYAN_BOLD << "SC4V-TP " << COLOR_RESET
		<< COLOR_GREEN_BOLD << _name << COLOR_RESET
		<< " attacks " << COLOR_YELLOW_BOLD << target << COLOR_RESET
		<< " at range, causing "
		<< COLOR_RED_BOLD << _rangedAttackDamage << COLOR_RESET
		<< " points of damage!\n";
}

void		ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << COLOR_CYAN_BOLD << "SC4V-TP " << COLOR_RESET
		<< COLOR_GREEN_BOLD << _name << COLOR_RESET
		<< " attacks " << COLOR_YELLOW_BOLD << target << COLOR_RESET
		<< " at melee, causing "
		<< COLOR_RED_BOLD << _meleeAttackDamage << COLOR_RESET
		<< " points of damage!\n";
}

void		ScavTrap::takeDamage(unsigned int amount)
{
	if ((unsigned int)_armorDamageReduction < amount)
	{
		int damage = amount - _armorDamageReduction;
		if ((_hitPoints - damage) <= 0)
		{
			std::cout << COLOR_CYAN_BOLD << "SC4V-TP " << COLOR_RESET
				<< COLOR_GREEN_BOLD << _name << COLOR_RESET
				<< " takes " << COLOR_RED_BOLD << _hitPoints << COLOR_RESET
				<< " points of damage, and is killed!\n";
			_hitPoints = 0;
		}
		else
		{
			_hitPoints -= damage;
			std::cout << COLOR_CYAN_BOLD << "SC4V-TP " << COLOR_RESET
				<< COLOR_GREEN_BOLD << _name << COLOR_RESET
				<< " takes " << COLOR_RED_BOLD << damage << COLOR_RESET
				<< " points of damage, current HP: "
				<< COLOR_BLUE_BOLD << _hitPoints << COLOR_RESET << "\n";
		}
	}
	else
	{
		std::cout << COLOR_CYAN_BOLD << "SC4V-TP " << COLOR_RESET
			<< COLOR_GREEN_BOLD << _name << COLOR_RESET
			<< " not damaged, current HP: "
			<< COLOR_BLUE_BOLD << _hitPoints << COLOR_RESET << "\n";;
	}
}

void		ScavTrap::beRepaired(unsigned int amount)
{
	if (amount > (unsigned int)(_maxHitPoints - _hitPoints))
	{
		std::cout << COLOR_CYAN_BOLD << "SC4V-TP " << COLOR_RESET
			<< COLOR_GREEN_BOLD << _name << COLOR_RESET
			<< " repaired "
			<< COLOR_BLUE_BOLD << _maxHitPoints - _hitPoints << COLOR_RESET
			<< " HP, current HP: "
			<< COLOR_BLUE_BOLD << _maxHitPoints << COLOR_RESET << "\n";
		_hitPoints = _maxHitPoints;
	}
	else
	{
		_hitPoints += amount;
		std::cout << COLOR_CYAN_BOLD << "SC4V-TP " << COLOR_RESET
			<< COLOR_GREEN_BOLD << _name << COLOR_RESET
			<< " repaired "
			<< COLOR_BLUE_BOLD << amount << COLOR_RESET
			<< " HP, current HP: "
			<< COLOR_BLUE_BOLD << _hitPoints << COLOR_RESET << "\n";
	}
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
		<< COLOR_YELLOW_BOLD
		<< challengesSet[rand() % challengesCount]
		<< COLOR_RESET << " challenge!\n";
}
