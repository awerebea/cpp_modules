/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 23:11:27 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/04 13:56:59 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "Contact.class.hpp"

class Phonebook {
private:
	int					_contactsInBook;
	static const int	_arrSize = 8;
	Contact				_contactsArray[_arrSize];

	void		_addContact();
	void		_searchContact() const;
	void		_printTable() const;
public:
	Phonebook();
	~Phonebook();
	void		prompt();
};

#endif
