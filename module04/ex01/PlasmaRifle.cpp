/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 18:23:29 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/21 20:12:09 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {}

PlasmaRifle::~PlasmaRifle() {}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &a) : AWeapon(a) {}

PlasmaRifle &			PlasmaRifle::operator=(const PlasmaRifle &a)
{
	if (this != &a)
		AWeapon::operator=(a);
	return (*this);
}

void					PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
