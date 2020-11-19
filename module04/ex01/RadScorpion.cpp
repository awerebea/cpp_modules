/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 19:10:08 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/21 20:14:14 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << COLOR_YELLOW_BOLD "* click click click *" << COLOR_RESET
		<< std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << COLOR_RED_BOLD << "* SPROTCH *" << COLOR_RESET
		<< std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &a) : Enemy(a.getHP(), a.getType())
{
	*this = a;
}

RadScorpion &			RadScorpion::operator = (const RadScorpion &a)
{
	if (this != &a)
		Enemy::operator = (a);
	return (*this);
}
