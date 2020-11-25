/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 01:03:38 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/25 21:51:40 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; ++i)
	{
		_inventory[i] = nullptr;
	}
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; ++i)
	{
		if (_inventory[i])
		{
			delete _inventory[i];
		}
	}
}

MateriaSource::MateriaSource(MateriaSource const &a)
{
	*this = a;
}

MateriaSource &		MateriaSource::operator=(MateriaSource const &a)
{
	if (this != &a)
	{
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

void				MateriaSource::learnMateria(AMateria *a)
{
	for (int i = 0; i < 4; ++i)
	{
		if (!_inventory[i])
		{
			_inventory[i] = a->clone();
			break ;
		}
	}
}

AMateria *			MateriaSource::createMateria(std::string const &type)
{
	AMateria		*newMateria = nullptr;

	for (int i = 0; i < 4; ++i)
	{
		if (_inventory[i] && _inventory[i]->getType() == type)
		{
			newMateria = _inventory[i]->clone();
			break ;
		}
	}
	return (newMateria);
}
