/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:51:43 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/23 20:56:26 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include "ISpaceMarine.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back..." << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &a)
{
	*this = a;
}

AssaultTerminator &		AssaultTerminator::operator=(const AssaultTerminator &a)
{
	if (this != &a) {}
	return (*this);
}

ISpaceMarine *			AssaultTerminator::clone() const
{
	return (new AssaultTerminator(*this));
}

void					AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void					AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void					AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}
