/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 17:56:12 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/21 20:11:25 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage) :
	_name(name), _apcost(apcost), _damage(damage) {}

AWeapon::~AWeapon() {}

AWeapon::AWeapon(const AWeapon &a)
{
	*this = a;
}

AWeapon &			AWeapon::operator = (const AWeapon &a)
{
	if (this != &a)
	{
		_name = a._name;
		_apcost = a._apcost;
		_damage = a._damage;
	}
	return (*this);
}

std::string			AWeapon::getName(void) const
{
	return (this->_name);
}

int					AWeapon::getAPCost(void) const
{
	return (this->_apcost);
}

int					AWeapon::getDamage(void) const
{
	return (this->_damage);
}

