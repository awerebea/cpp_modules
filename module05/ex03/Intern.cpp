/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 15:37:05 by awerebea          #+#    #+#             */
/*   Updated: 2020/12/01 13:49:37 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(Intern const &a)
{
	*this = a;
}

Intern &				Intern::operator=(Intern const &a)
{
	if (this != &a) {}
	return (*this);
}

char const *			Intern::UnknownFormException::what() const throw()
{
	return ("Error: unknown form.\n");
}

Form *			Intern::makeShrubberyCreationForm(std::string const & target)
{
	return (new ShrubberyCreationForm(target));
}

Form *			Intern::makeRobotomyRequestForm(std::string const & target)
{
	return (new RobotomyRequestForm(target));
}

Form *			Intern::makePresidentialPardonForm(std::string const & target)
{
	return (new PresidentialPardonForm(target));
}

Form *					Intern::makeForm(std::string const &formName,
										std::string const &target) const
{
	typedef Form * (*func)(std::string const & target);
	typedef struct
	{
		std::string const &		formName;
		func					formCreator;
	} knownForms;

	knownForms forms[] =
	{
		{ ShrubberyCreationForm::getName(), &makeShrubberyCreationForm },
		{ RobotomyRequestForm::getName(), &makeRobotomyRequestForm },
		{ PresidentialPardonForm::getName(), &makePresidentialPardonForm },
	};
	for (int i = 0; i < 3; ++i)
	{
		if (forms[i].formName == formName)
		{
			return (forms[i].formCreator(target));
		}
	}
	throw (UnknownFormException());
}
