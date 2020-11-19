/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 18:55:40 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/21 22:09:24 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type) : _hp(hp), _type(type) {}

Enemy::~Enemy() {}

Enemy::Enemy(const Enemy &a)
{
	*this = a;
}

Enemy &			Enemy::operator=(const Enemy &a)
{
	if (this != &a)
	{
		_hp = a._hp;
		_type = a._type;
	}
	return (*this);
}

std::string			Enemy::getType() const
{
	return (this->_type);
}

int					Enemy::getHP() const
{
	return (this->_hp);
}

void				Enemy::takeDamage(int amount)
{
	if (amount > 0)
	{
		if ((_hp -= amount) < 0)
			_hp = 0;
	}
}
