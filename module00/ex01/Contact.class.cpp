/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 23:36:31 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/04 18:12:14 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.class.hpp"

Contact::Contact() {}

Contact::~Contact() {}

int				Contact::initContact() {
	_fieldName[0] = "First name: ";
	_fieldName[1] = "Last name: ";
	_fieldName[2] = "Nickname: ";
	_fieldName[3] = "Login: ";
	_fieldName[4] = "Postal address: ";
	_fieldName[5] = "Email: ";
	_fieldName[6] = "Phone number: ";
	_fieldName[7] = "Birthday date: ";
	_fieldName[8] = "Favourite meal: ";
	_fieldName[9] = "Underwear color: ";
	_fieldName[10] = "Darkest secret: ";
	for (int i = 0; i <= 2; i++) {
		std::cout << "Input " << _fieldName[i];
		std::getline(std::cin, _fieldData[i]);
	}
	for (int i = 0; i <= 2; i++) {
		if (_fieldData[i].length())
			break ;
		else if (i == 2) {
			std::cout << "The contact must have at least one of fields: ";
			std::cout << "First name, Last name or Nickname." << std::endl;
			return (1);
		}
	}
	for (int i = 3; i < _numOfFields; i++) {
		std::cout << "Input " << _fieldName[i];
		std::getline(std::cin, _fieldData[i]);
	}
	return (0);
}

void			Contact::getTableString() const {
	for (int i = 0; i < 3; i++) {
		if (_fieldData[i].length() <= 10)
			std::cout << std::setw(10) << _fieldData[i] << "|";
		else
			std::cout << _fieldData[i].substr(0, 9) << ".|";
	}
}

void			Contact::getContact() const {
	for (int i = 0; i < _numOfFields; i++) {
		std::cout << _fieldName[i] << _fieldData[i] << std::endl;
	}
}
