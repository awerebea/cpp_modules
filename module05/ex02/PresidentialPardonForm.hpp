/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 14:06:09 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/29 14:07:12 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class					PresidentialPardonForm : public Form
{
						PresidentialPardonForm();
	std::string			_target;
public:
						PresidentialPardonForm(std::string const &);
						PresidentialPardonForm(PresidentialPardonForm const &);
	PresidentialPardonForm &	operator=(PresidentialPardonForm const &);
	virtual				~PresidentialPardonForm();

	std::string			getTarget() const;
	virtual void		execute(Bureaucrat const & executor) const;
};

#endif
