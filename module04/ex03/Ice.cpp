/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 21:36:31 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/25 20:13:12 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::~Ice() {}

Ice::Ice(const Ice &a) : AMateria("ice")
{
	*this = a;
}

Ice &				Ice::operator=(Ice const &a)
{
	if (this != &a)
		_xp = a._xp;
	return (*this);
}

AMateria *			Ice::clone() const
{
	return (new Ice(*this));
}

void				Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout	<< "* shoots an ice bolt " << target.getName() << " *"
				<< std::endl;
}
