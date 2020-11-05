/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 17:41:19 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/05 22:22:26 by awerebea         ###   ########.fr       */
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
