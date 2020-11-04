/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 00:28:39 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/04 15:43:18 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Phonebook.class.hpp"

Phonebook::Phonebook() {
	_contactsInBook = 0;
}

Phonebook::~Phonebook() {}

void			Phonebook::prompt() {
	std::string			input;
	const std::string	prompt = "* ";

	std::cout	<< "Type ADD or SEARCH to manage contacts, " \
				<< "or EXIT to quit program." << std::endl << prompt;
	std::getline(std::cin, input);
	while (input != "EXIT") {
		if (input == "ADD")
			_addContact();
		else if (input == "SEARCH")
			this->_searchContact();
		std::cout << prompt;
		std::getline(std::cin, input);
	}
}

void			Phonebook::_addContact() {
	if (_contactsInBook < _arrSize)
	{
		if (_contactsArray[_contactsInBook].initContact()) {
			return ;
		}
		_contactsInBook++;
	}
	else
		std::cout << "Octalbook is full" << std::endl;
}

void			Phonebook::_searchContact() const {
	if (!_contactsInBook) {
		std::cout	<< "Octalbook has no contacts, please add it first." \
					<< std::endl;
		return ;
	}
	std::string		index;
	std::string		separator = "+----------+----------+----------+----------+";
	std::cout << separator << std::endl;
	std::cout	<< "|" << std::setw(10) << "Index" << "|" \
				<< std::setw(10) << "First name" << "|" \
				<< std::setw(10) << "Last name" << "|" \
				<< std::setw(10) << "Nickname" << "|" << std::endl;
	std::cout << separator << std::endl;
	for (int i = 0; i < _contactsInBook; i++){
		std::cout << "|" << std::setw(10) << i + 1 << "|";
		_contactsArray[i].getTableString();
		std::cout << std::endl << separator << std::endl;
	}
	std::cout	<< "Choose contact index to show " << "(1 - " \
				<< _contactsInBook << "): ";
	for (int i = 1; i <= 3; i++) {
		std::getline(std::cin, index);
		if (index.length() == 1 && index[0] > '0' \
				&& index[0] <= _contactsInBook + '0') {
			_contactsArray[index[0] - '1'].getContact();
			return ;
		}
		else if (i < 3)
			std::cout << "Incorrect input. Attempt " << i + 1 << " of 3: ";
	}
}
