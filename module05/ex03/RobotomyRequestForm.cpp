/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 12:53:29 by awerebea          #+#    #+#             */
/*   Updated: 2020/12/01 13:52:00 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

std::string RobotomyRequestForm::_name = "robotomy request";

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) :
	Form(RobotomyRequestForm::_name, 72, 45), _target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &a) :
	Form(a), _target(a._target)
{}

RobotomyRequestForm &
				RobotomyRequestForm::operator=(RobotomyRequestForm const &a)
{
	if (this != &a)
		_target = a._target;
	return(*this);
}

std::string				RobotomyRequestForm::getTarget() const
{
	return (_target);
}

void		RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::cout << "...DRRRR ZRRRR BRRRR (drilling noise)..." << std::endl;
	if (rand() % 2)
		std::cout << _target << " has been robotomized successfully."
			<< std::endl;
	else
		std::cout << _target << " robotomizing failed." << std::endl;
}

std::string const &	RobotomyRequestForm::getName()
{
	return (_name);
}
