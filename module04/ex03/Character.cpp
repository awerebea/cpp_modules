/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 23:46:36 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/25 21:50:27 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) : _name(name)
{
	for (int i = 0; i < 4; ++i)
		_inventory[i] = nullptr;
}

Character::~Character() {}

Character::Character(Character const &a)
{
	*this = a;
}

Character &				Character::operator=(Character const &a)
{
	if (this != &a)
	{
		_name = a._name;
		for (int i = 0; i < 4; ++i)
		{
			if (_inventory[i])
			{
				delete _inventory[i];
				_inventory[i] = nullptr;
			}
			if (a._inventory[i])
				_inventory[i] = a._inventory[i]->clone();
		}
	}
	return (*this);
}

std::string const &		Character::getName() const
{
	return (_name);
}

void					Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4)
	{
		if (_inventory[idx])
			_inventory[idx]->use(target);
	}
}

void					Character::equip(AMateria *m)
{
	if (m)
	{
		for (int i = 0; i < 4; ++i)
		{
			if (!_inventory[i])
			{
				_inventory[i] = m;
				break;
			}
		}
	}
}

void					Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		_inventory[idx] = nullptr;
	}
}
