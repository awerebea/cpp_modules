/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 23:17:09 by awerebea          #+#    #+#             */
/*   Updated: 2020/12/04 17:15:36 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>

class Contact {
private:
	static const int	_numOfFields = 11;
	std::string	_fieldName[_numOfFields];
	std::string	_fieldData[_numOfFields];

public:
	Contact();
	~Contact();
	int			initContact();
	void		getTableString() const;
	void		getContact() const;
};

#endif
