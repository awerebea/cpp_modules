/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 23:17:09 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/04 18:13:35 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>

class Contact {
private:
	static const int	_numOfFields = 11;
	std::string	_fieldName[_numOfFields];
	std::string	_firstName, \
				_lastName, \
				_nickName, \
				_login, \
				_postalAddress, \
				_email, \
				_phoneNumber, \
				_birthdayiDate, \
				_favouriteMeal, \
				_underwearColor, \
				_darkestSecret;
	std::string	_fieldData[_numOfFields];

public:
	Contact();
	~Contact();
	int			initContact();
	void		getTableString() const;
	void		getContact() const;
};

#endif
