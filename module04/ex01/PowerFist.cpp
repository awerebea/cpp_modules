/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 18:43:01 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/21 20:13:26 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {}

PowerFist::~PowerFist() {}

PowerFist::PowerFist(const PowerFist &a) : AWeapon(a) {}

PowerFist &			PowerFist::operator = (const PowerFist &a)
{
	if (this != &a)
		AWeapon::operator=(a);
	return (*this);
}

void					PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
