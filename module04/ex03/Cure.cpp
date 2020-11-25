/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 00:49:25 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/25 21:26:57 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::~Cure() {}

Cure::Cure(const Cure &a) : AMateria("cure")
{
	*this = a;
}

Cure &				Cure::operator=(Cure const &a)
{
	if (this != &a)
		_xp = a._xp;
	return (*this);
}

AMateria *			Cure::clone() const
{
	return (new Cure(*this));
}

void				Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout	<< "* heals " << target.getName() << "'s wounds *"
				<< std::endl;
}
