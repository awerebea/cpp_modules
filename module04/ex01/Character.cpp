/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 19:27:14 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/21 22:05:41 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) : _name(name)
{
	_ap = MAX_AP;
	_weapon = nullptr;
}

Character::~Character() {}

Character::Character(const Character &a)
{
	*this = a;
}

Character &			Character::operator = (const Character &a)
{
	if (this != &a)
	{
		_name = a._name;
		_ap = a._ap;
		_weapon = a._weapon;
	}
	return (*this);
}

std::string			Character::getName() const
{
	return (this->_name);
}

int					Character::getAP() const
{
	return (this->_ap);
}


AWeapon *			Character::getWeapon() const
{
	return (this->_weapon);
}

void				Character::recoverAP()
{
	if ((_ap += 10) > MAX_AP)
		_ap = MAX_AP;
}

void				Character::equip(AWeapon *weapon)
{
	_weapon = weapon;
}

void				Character::attack(Enemy *enemy)
{
	if (!_weapon)
		return ;
	if (_ap >= _weapon->getAPCost())
	{
		std::cout << COLOR_GREEN_BOLD << _name << COLOR_RESET << " attacks "
			<< COLOR_BLUE_BOLD << enemy->getType() << COLOR_RESET << " with a "
			<< COLOR_CYAN_BOLD << _weapon->getName() << COLOR_RESET
			<< std::endl;
		_ap -= _weapon->getAPCost();
		_weapon->attack();
		enemy->takeDamage(_weapon->getDamage());
		if (!enemy->getHP())
			delete enemy;
	}
}

std::ostream &		operator << (std::ostream &out, Character &a)
{
	if (a.getWeapon())
	{
		out << COLOR_GREEN_BOLD << a.getName() << COLOR_RESET << " has "
			<< COLOR_BLUE_BOLD << a.getAP() << COLOR_RESET
			<< " AP and wields a "
			<< COLOR_CYAN_BOLD << a.getWeapon()->getName() << COLOR_RESET
			<< std::endl;
	}
	else
	{
		out << COLOR_GREEN_BOLD << a.getName() << COLOR_RESET << " has "
			<< COLOR_BLUE_BOLD << a.getAP() << COLOR_RESET
			<< " AP and is unarmed" << std::endl;
	}
	return (out);
}
