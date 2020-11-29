/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 15:37:05 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/29 21:40:58 by awerebea         ###   ########.fr       */
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

Form *					Intern::makeForm(std::string const &formName,
										std::string const &target) const
{
	Form *				knownForms[3] {
		new ShrubberyCreationForm(target),
		new RobotomyRequestForm(target),
		new PresidentialPardonForm(target)
	};
	for (int i = 0; i < 3; ++i)
	{
		if (formName == knownForms[i]->getName())
		{
			std::cout << "Intern creates " << formName << "." << std::endl;
			for (int j = 0; j < 3; ++j)
			{
				if (j != i)
					delete knownForms[j];
			}
			return (knownForms[i]);
		}
	}
	throw (UnknownFormException());
}
