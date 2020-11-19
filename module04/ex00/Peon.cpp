/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 16:35:16 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/19 17:10:37 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << COLOR_YELLOW_BOLD << "Zog zog" << COLOR_RESET << "."
		<< std::endl;
}

Peon::~Peon() {
	std::cout << COLOR_RED_BOLD << "Bleuark" << COLOR_RESET << "..."
		<< std::endl;
}

Peon::Peon(const Peon &a) : Victim(a)
{
	*this = a;
}

Peon &			Peon::operator = (const Peon &a)
{
	if (this != &a)
	{
		_name = a._name;
	}
	return (*this);
}

void				Peon::getPolymorphed(void) const
{
	std::cout << COLOR_GREEN_BOLD << _name << COLOR_RESET
		<< " has been turned into a "
		<< COLOR_BLUE_BOLD "pink pony" << COLOR_RESET << "!" << std::endl;
}
