/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 13:40:48 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/19 17:07:54 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) :
	_name(name), _title(title)
{
	std::cout << COLOR_GREEN_BOLD << _name << COLOR_RESET << ", "
		<< COLOR_CYAN_BOLD << _title << COLOR_RESET << ", "
		<< COLOR_YELLOW_BOLD << "is born!" << COLOR_RESET
		<< std::endl;
}

Sorcerer::~Sorcerer() {
	std::cout << COLOR_GREEN_BOLD << _name << COLOR_RESET << ", "
		<< COLOR_CYAN_BOLD << _title << COLOR_RESET << ", is "
		<< COLOR_RED_BOLD << "dead" << COLOR_RESET
		<< ". Consequences will never be the same!"
		<< std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &a)
{
	*this = a;
}

Sorcerer &			Sorcerer::operator = (const Sorcerer &a)
{
	if (this != &a)
	{
		_name = a._name;
		_title = a._title;
	}
	return (*this);
}

std::ostream &		operator << (std::ostream &out, const Sorcerer &a)
{
	out << "I am " << COLOR_GREEN_BOLD << a.getName() << COLOR_RESET << ", "
		<< COLOR_CYAN_BOLD << a.getTitle() << COLOR_RESET
		<< ", and I like ponies!" << std::endl;
	return (out);
}

std::string			Sorcerer::getTitle(void) const
{
	return (this->_title);
}

std::string			Sorcerer::getName(void) const
{
	return (this->_name);
}

void				Sorcerer::polymorph(Victim const &a) const
{
	a.getPolymorphed();
}
