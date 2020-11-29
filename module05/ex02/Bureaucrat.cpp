/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 20:25:53 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/29 13:50:26 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string const &name, int grade) :
	_name(name), _grade(grade)
{
	if (grade < 1)
		throw (GradeTooHighException());
	if (grade > 150)
		throw (GradeTooLowException());
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
		throw (GradeTooHighException());
	_grade--;
}

void					Bureaucrat::decrGrade()
{
	if (_grade == 150)
		throw (GradeTooLowException());
	_grade++;
}

void					Bureaucrat::signForm(Form &a) const
{
	try
	{
		a.beSigned(*this);
	}
	catch (std::exception & e)
	{
		std::cout << _name << " cannot sign " << a.getName() << " because "
			<< e.what();
		return ;
	}
	std::cout << _name << " signs " << a.getName() << "." << std::endl;
}

void					Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
	}
	catch (std::exception & e)
	{
		std::cout << _name << " cannot execute " << form.getName()
			<< " because " << e.what();
		return ;
	}
	std::cout << _name << " executes " << form.getName() << "." << std::endl;
}

std::ostream &			operator<<(std::ostream & out, Bureaucrat const & a)
{
	out << a.getName() << ", bureaucrat grade " << a.getGrade() << "."
		<< std::endl;
	return (out);
}
