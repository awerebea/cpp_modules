/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 16:23:00 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/29 15:01:51 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class						Bureaucrat;

class						Form
{
							Form();
	std::string const		_name;
	bool					_signed;
	int const				_gradeSign;
	int const				_gradeExecute;
public:
							Form(std::string const &, int, int);
							Form(Form const &);
	virtual					~Form();
	Form &					operator=(Form const &);

	std::string const &		getName() const;
	bool					getSignStatus() const;
	int						getGradeSign() const;
	int						getGradeExecute() const;
	void					beSigned(Bureaucrat const &);
	virtual void			execute(Bureaucrat const & executor) const = 0;

	class					GradeTooHighException : public std::exception
	{
		char const *		what() const throw();
	};

	class					GradeTooLowException : public std::exception
	{
		char const *		what() const throw();
	};

	class					FormAlreadySignedException : public std::exception
	{
		char const *		what() const throw();
	};

	class					FormUnsignedException : public std::exception
	{
		char const *		what() const throw();
	};
};

std::ostream &				operator<<(std::ostream &, Form const &);

#endif
