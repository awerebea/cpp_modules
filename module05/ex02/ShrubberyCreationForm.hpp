/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 14:09:54 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/28 22:18:03 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include "Form.hpp"

class					ShrubberyCreationForm : public Form
{
						ShrubberyCreationForm();
	std::string			_target;
public:
						ShrubberyCreationForm(std::string const &);
						ShrubberyCreationForm(ShrubberyCreationForm const &);
	ShrubberyCreationForm &	operator=(ShrubberyCreationForm const &);
	virtual				~ShrubberyCreationForm();

	std::string			getTarget() const;
	virtual void		execute(Bureaucrat const & executor) const;

	class				TargetFileOpenWriteException : public std::exception
	{
		char const *	what() const throw();
	};
};

#endif
