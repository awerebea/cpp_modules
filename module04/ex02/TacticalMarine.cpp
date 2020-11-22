/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:19:24 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/23 21:33:17 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include "ISpaceMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine &a)
{
	*this = a;
}

TacticalMarine &		TacticalMarine::operator=(const TacticalMarine &a)
{
	if (this != &a) {}
	return (*this);
}

ISpaceMarine *			TacticalMarine::clone() const
{
	return (new TacticalMarine(*this));
}

void					TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void					TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void					TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}
