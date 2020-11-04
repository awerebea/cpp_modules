/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 23:17:09 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/04 15:45:47 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>

class Contact {
private:
	static const int	_numOfFields = 11;
	std::string	_fieldName[_numOfFields] = {
				"First name: ", \
				"Last name: ", \
				"Nickname: ", \
				"Login: ", \
				"Postal address: ", \
				"Email: ", \
				"Phone number: ", \
				"Birthday date: ", \
				"Favourite meal: ", \
				"Underwear color: ", \
				"Darkest secret: " };
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
	std::string	_fieldData[_numOfFields] = { _firstName, _lastName, _nickName, \
				_login, _postalAddress, _email, _phoneNumber, _birthdayiDate, \
				_favouriteMeal, _underwearColor, _darkestSecret };
public:
	Contact();
	~Contact();
	int			initContact();
	void		getTableString() const;
	void		getContact() const;
};

#endif
