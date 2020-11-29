/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 15:32:28 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/29 21:29:47 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class						Intern
{
public:
							Intern();
							Intern(Intern const &a);
							~Intern();

	Intern &				operator=(Intern const &a);

	Form *					makeForm(std::string const &,
													std::string const &) const;

	class					UnknownFormException : public std::exception
	{
		char const *		what() const throw();
	};
};

#endif
