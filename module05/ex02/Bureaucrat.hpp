/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 18:07:00 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/28 16:28:28 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class					Form;

class					Bureaucrat
{
						Bureaucrat();
	std::string const	_name;
	int					_grade;
public:
						Bureaucrat(std::string const &, int);
						Bureaucrat(Bureaucrat const &);
						~Bureaucrat();

	Bureaucrat &		operator=(Bureaucrat const &);

	std::string const &	getName() const;
	int					getGrade() const;
	void				incrGrade();
	void				decrGrade();
	void				signForm(Form &) const;
	void				executeForm(Form const & form);

	class				GradeTooHighException : public std::exception
	{
		char const *	what() const throw();
	};

	class				GradeTooLowException : public std::exception
	{
		char const *	what() const throw();
	};
};

std::ostream &			operator<<(std::ostream &, Bureaucrat const &);

#endif
