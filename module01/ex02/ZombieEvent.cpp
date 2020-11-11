/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 17:41:19 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/11 14:48:45 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() {}

ZombieEvent::~ZombieEvent() {}

void	ZombieEvent::setZombieType(int type) {
	this->_type = type;
}

Zombie*	ZombieEvent::newZombie(std::string name) const {
	Zombie*	zombie = new Zombie(name, this->_type);
	return (zombie);
}
