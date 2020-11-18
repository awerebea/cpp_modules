/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 16:22:08 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/18 12:27:24 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default ClapTrap constructor is called\n";
	_hitPoints = 0;
	_maxHitPoints = 50;
	_energyPoints = 0;
	_maxEnergyPoints = 50;
	_level = 1;
	_name = "Unnamed";
	_meleeAttackDamage = 0;
	_rangedAttackDamage = 0;
	_armorDamageReduction = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Parametric ClapTrap constructor is called\n";
	_hitPoints = 0;
	_maxHitPoints = 50;
	_energyPoints = 0;
	_maxEnergyPoints = 50;
	_level = 1;
	_name = name;
	_meleeAttackDamage = 0;
	_rangedAttackDamage = 0;
	_armorDamageReduction = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor ClapTrap is called\n";
}

ClapTrap::ClapTrap(const ClapTrap &a)
{
	std::cout << "Copy ClapTrap constructor is called\n";
	*this = a;
}

ClapTrap &			ClapTrap::operator=(const ClapTrap &a)
{
	std::cout << "Equal ClapTrap operator is called\n";
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

void		ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << COLOR_GREEN_BOLD << _name << COLOR_RESET
				<< " attacks " << COLOR_YELLOW_BOLD << target << COLOR_RESET
				<< " at range, causing "
				<< COLOR_RED_BOLD << _rangedAttackDamage << COLOR_RESET
				<< " points of damage!\n";
}

void		ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << COLOR_GREEN_BOLD << _name << COLOR_RESET
				<< " attacks " << COLOR_YELLOW_BOLD << target << COLOR_RESET
				<< " at melee, causing "
				<< COLOR_RED_BOLD << _meleeAttackDamage << COLOR_RESET
				<< " points of damage!\n";
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	if ((unsigned int)_armorDamageReduction < amount)
	{
		int damage = amount - _armorDamageReduction;
		if ((_hitPoints - damage) <= 0)
		{
			std::cout << COLOR_GREEN_BOLD << _name << COLOR_RESET
				<< " takes " << COLOR_RED_BOLD << _hitPoints << COLOR_RESET
				<< " points of damage, and is killed!\n";
			_hitPoints = 0;
		}
		else
		{
			_hitPoints -= damage;
			std::cout << COLOR_GREEN_BOLD << _name << COLOR_RESET
				<< " takes " << COLOR_RED_BOLD << damage << COLOR_RESET
				<< " points of damage, current HP: "
				<< COLOR_BLUE_BOLD << _hitPoints << COLOR_RESET << "\n";
		}
	}
	else
	{
		std::cout << COLOR_GREEN_BOLD << _name << COLOR_RESET
			<< " not damaged, current HP: "
			<< COLOR_BLUE_BOLD << _hitPoints << COLOR_RESET << "\n";;
	}
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	if (amount > (unsigned int)(_maxHitPoints - _hitPoints))
	{
		std::cout << COLOR_GREEN_BOLD << _name << COLOR_RESET
			<< " repaired "
			<< COLOR_BLUE_BOLD << _maxHitPoints - _hitPoints << COLOR_RESET
			<< " HP, current HP: "
			<< COLOR_BLUE_BOLD << _maxHitPoints << COLOR_RESET << "\n";
		_hitPoints = _maxHitPoints;
	}
	else
	{
		_hitPoints += amount;
		std::cout << COLOR_GREEN_BOLD << _name << COLOR_RESET
			<< " repaired "
			<< COLOR_BLUE_BOLD << amount << COLOR_RESET
			<< " HP, current HP: "
			<< COLOR_BLUE_BOLD << _hitPoints << COLOR_RESET << "\n";
	}
}
