/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 16:08:48 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/19 17:09:55 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called "
		<< COLOR_GREEN_BOLD << _name << COLOR_RESET << " just "
		<< COLOR_YELLOW_BOLD << "appeared" << COLOR_RESET << "!" << std::endl;
}

Victim::~Victim() {
	std::cout << "Victim "
		<< COLOR_GREEN_BOLD << _name << COLOR_RESET << " just "
		<< COLOR_RED_BOLD << "died" << COLOR_RESET
		<< " for no apparent reason!" << std::endl;
}

Victim::Victim(const Victim &a)
{
	*this = a;
}

Victim &			Victim::operator = (const Victim &a)
{
	if (this != &a)
	{
		_name = a._name;
	}
	return (*this);
}

std::ostream &		operator << (std::ostream &out, const Victim &a)
{
	out << "I am " << COLOR_GREEN_BOLD << a.getName() << COLOR_RESET
		<< " and I like otters!" << std::endl;
	return (out);
}

std::string			Victim::getName(void) const
{
	return (this->_name);
}

void				Victim::getPolymorphed(void) const
{
	std::cout << COLOR_GREEN_BOLD << _name << COLOR_RESET
		<< " has been turned into a cute "
		<< COLOR_BLUE_BOLD "little sheep" << COLOR_RESET << "!" << std::endl;
}
