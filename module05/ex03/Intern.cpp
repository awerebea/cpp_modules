/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 15:37:05 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/29 18:07:04 by awerebea         ###   ########.fr       */
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

Form *					makeShrubberyCreationForm(std::string const &target)
{
	return (new ShrubberyCreationForm(target));
}

Form *					makeRobotomyRequestForm(std::string const &target)
{
	return (new RobotomyRequestForm(target));
}

Form *					makePresidentialPardonForm(std::string const &target)
{
	return (new PresidentialPardonForm(target));
}

Form *					Intern::makeForm(std::string const &formName,
										std::string const &target) const
{
	static struct forms	knownForms[3] {
		{ "shrubbery creation", makeShrubberyCreationForm },
		{ "robotomy request", makeRobotomyRequestForm },
		{ "presidential pardon", makePresidentialPardonForm }
	};

	for (int i = 0; i < 3; ++i)
	{
		if (formName == knownForms[i].name)
		{
			std::cout << "Intern creates " << formName << "." << std::endl;
			return (knownForms[i].formMaker(target));
		}
	}
	throw (UnknownFormException());
}
