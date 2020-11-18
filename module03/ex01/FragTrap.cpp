/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 16:22:08 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/18 15:51:47 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
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

FragTrap::FragTrap(std::string name)
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

void		FragTrap::rangedAttack(std::string const & target)
{
		std::cout << COLOR_CYAN_BOLD << "FR4G-TP " << COLOR_RESET
			<< COLOR_GREEN_BOLD << _name << COLOR_RESET
			<< " attacks " << COLOR_YELLOW_BOLD << target << COLOR_RESET
			<< " at range, causing "
			<< COLOR_RED_BOLD << _rangedAttackDamage << COLOR_RESET
			<< " points of damage!\n";
}

void		FragTrap::meleeAttack(std::string const & target)
{
		std::cout << COLOR_CYAN_BOLD << "FR4G-TP " << COLOR_RESET
			<< COLOR_GREEN_BOLD << _name << COLOR_RESET
			<< " attacks " << COLOR_YELLOW_BOLD << target << COLOR_RESET
			<< " at melee, causing "
			<< COLOR_RED_BOLD << _meleeAttackDamage << COLOR_RESET
			<< " points of damage!\n";
}

void		FragTrap::takeDamage(unsigned int amount)
{
	if ((unsigned int)_armorDamageReduction < amount)
	{
		int damage = amount - _armorDamageReduction;
		if ((_hitPoints - damage) <= 0)
		{
			std::cout << COLOR_CYAN_BOLD << "FR4G-TP " << COLOR_RESET
				<< COLOR_GREEN_BOLD << _name << COLOR_RESET
				<< " takes " << COLOR_RED_BOLD << _hitPoints << COLOR_RESET
				<< " points of damage, and is killed!\n";
			_hitPoints = 0;
		}
		else
		{
			_hitPoints -= damage;
			std::cout << COLOR_CYAN_BOLD << "FR4G-TP " << COLOR_RESET
				<< COLOR_GREEN_BOLD << _name << COLOR_RESET
				<< " takes " << COLOR_RED_BOLD << damage << COLOR_RESET
				<< " points of damage, current HP: "
				<< COLOR_BLUE_BOLD << _hitPoints << COLOR_RESET << "\n";
		}
	}
	else
	{
		std::cout << COLOR_CYAN_BOLD << "FR4G-TP " << COLOR_RESET
			<< COLOR_GREEN_BOLD << _name << COLOR_RESET
			<< " not damaged, current HP: "
			<< COLOR_BLUE_BOLD << _hitPoints << COLOR_RESET << "\n";;
	}
}

void		FragTrap::beRepaired(unsigned int amount)
{
	if (amount > (unsigned int)(_maxHitPoints - _hitPoints))
	{
		std::cout << COLOR_CYAN_BOLD << "FR4G-TP " << COLOR_RESET
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
		std::cout << COLOR_CYAN_BOLD << "FR4G-TP " << COLOR_RESET
			<< COLOR_GREEN_BOLD << _name << COLOR_RESET
			<< " repaired "
			<< COLOR_BLUE_BOLD << amount << COLOR_RESET
			<< " HP, current HP: "
			<< COLOR_BLUE_BOLD << _hitPoints << COLOR_RESET << "\n";
	}
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
		std::cout << COLOR_CYAN_BOLD << "FR4G-TP " << COLOR_RESET
			<< COLOR_GREEN_BOLD << _name << COLOR_RESET
			<< " attacks " << COLOR_YELLOW_BOLD << target << COLOR_RESET
			<< " with "
			<< COLOR_RED_BOLD
			<< vhAttackTypes[rand() % vhAttackTypeCount]
			<< COLOR_RESET << "\n";
	}
	else
	{
		_energyPoints = 0;
		std::cout << COLOR_CYAN_BOLD << "FR4G-TP " << COLOR_RESET
			<< COLOR_GREEN_BOLD << _name << COLOR_RESET
			<< " has not enough energy for attack "
			<< COLOR_YELLOW_BOLD << target << COLOR_RESET << "!\n";
	}
}
