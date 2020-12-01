/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 14:07:19 by awerebea          #+#    #+#             */
/*   Updated: 2020/12/01 13:54:02 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

std::string PresidentialPardonForm::_name = "presidential pardon";

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) :
	Form(PresidentialPardonForm::_name, 25, 5), _target(target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &a)
	: Form(a), _target(a._target)
{}

PresidentialPardonForm &
			PresidentialPardonForm::operator=(PresidentialPardonForm const &a)
{
	if (this != &a)
		_target = a._target;
	return(*this);
}

std::string				PresidentialPardonForm::getTarget() const
{
	return (_target);
}

void		PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::cout << _target << " has been pardoned by Zafod Beeblebrox."
		<< std::endl;
}

std::string const &	PresidentialPardonForm::getName()
{
	return (_name);
}
