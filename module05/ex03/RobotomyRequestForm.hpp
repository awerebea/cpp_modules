/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 12:49:47 by awerebea          #+#    #+#             */
/*   Updated: 2020/12/01 13:52:50 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class					RobotomyRequestForm : public Form
{
						RobotomyRequestForm();
	static std::string	_name;
	std::string			_target;
public:
						RobotomyRequestForm(std::string const &);
						RobotomyRequestForm(RobotomyRequestForm const &);
	RobotomyRequestForm &	operator=(RobotomyRequestForm const &);
	virtual				~RobotomyRequestForm();

	std::string					getTarget() const;
	static std::string const &	getName();
	virtual void				execute(Bureaucrat const & executor) const;
};

#endif
