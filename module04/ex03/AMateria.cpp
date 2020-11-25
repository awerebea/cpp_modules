/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 18:04:05 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/25 21:07:13 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(const std::string &type) : _type(type), _xp(0) {}

AMateria::~AMateria() {}

AMateria::AMateria(const AMateria &a)
{
	*this = a;
}

AMateria &				AMateria::operator=(AMateria const &a)
{
	if (this != &a)
		_xp = a._xp;
	return (*this);
}

std::string const &		AMateria::getType() const
{
	return (_type);
}

unsigned int			AMateria::getXP() const
{
	return (_xp);
}

void					AMateria::use(ICharacter &target)
{
	(void)target;
	_xp += 10;
}
