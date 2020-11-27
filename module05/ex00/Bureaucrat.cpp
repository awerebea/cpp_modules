/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 20:25:53 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/27 17:39:32 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string const &name, int grade) :
	_name(name), _grade(grade)
{
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(Bureaucrat const &a)
{
	*this = a;
}

Bureaucrat &			Bureaucrat::operator=(Bureaucrat const &a)
{
	if (this != &a)
	{
		_grade = a._grade;
	}
	return (*this);
}

std::string const &		Bureaucrat::getName() const
{
	return (_name);
}

int						Bureaucrat::getGrade() const
{
	return (_grade);
}

char const *			Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high.\n");
}

char const *			Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low.\n");
}

void					Bureaucrat::incrGrade()
{
	if (_grade == 1)
		throw (Bureaucrat::GradeTooHighException());
	_grade--;
}

void					Bureaucrat::decrGrade()
{
	if (_grade == 150)
		throw (Bureaucrat::GradeTooLowException());
	_grade++;
}

std::ostream &			operator<<(std::ostream & out, Bureaucrat const & a)
{
	out << a.getName() << ", bureaucrat grade " << a.getGrade() << "."
		<< std::endl;
	return (out);
}
