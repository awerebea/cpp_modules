/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 17:14:27 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/29 15:04:14 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const &name, int gradeSign, int gradeExecute) :
					_name(name), _signed(false), _gradeSign(gradeSign),
					_gradeExecute(gradeExecute)
{
	if (gradeExecute < 1 || gradeSign < 1)
		throw (GradeTooHighException());
	if (gradeExecute > 150 || gradeSign > 150)
		throw (GradeTooLowException());
}

Form::~Form() {}

Form::Form(Form const &a) : _name(a._name), _signed(a._signed),
					_gradeSign(a._gradeSign), _gradeExecute(a._gradeExecute)
{
	if (_gradeExecute < 1 || _gradeSign < 1)
		throw (GradeTooHighException());
	if (_gradeExecute > 150 || _gradeSign > 150)
		throw (GradeTooLowException());
}

Form &					Form::operator=(Form const & a)
{
	if (this != &a)
		_signed = a._signed;
	return (*this);
}

std::string const &		Form::getName() const
{
	return (_name);
}

bool					Form::getSignStatus() const
{
	return (_signed);
}

int						Form::getGradeSign() const
{
	return (_gradeSign);
}

int						Form::getGradeExecute() const
{
	return (_gradeExecute);
}

void					Form::beSigned(Bureaucrat const & a)
{
	if (_signed)
		throw (FormAlreadySignedException());
	if (a.getGrade() > _gradeSign)
		throw (GradeTooLowException());
	_signed = true;
}

char const *			Form::GradeTooHighException::what() const throw()
{
	return ("grade is too high.\n");
}

char const *			Form::GradeTooLowException::what() const throw()
{
	return ("grade is too low.\n");
}

char const *			Form::FormAlreadySignedException::what() const throw()
{
	return ("form is already signed.\n");
}

std::ostream &			operator<<(std::ostream & out, Form const & a)
{
	out << a.getName() << ", form is "
		<< (a.getSignStatus() ? "signed" : "unsigned")
		<< ", grade to sign " << a.getGradeSign()
		<< ", grade to execute " << a.getGradeExecute() << "." << std::endl;
	return (out);
}
