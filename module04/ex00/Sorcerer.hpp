/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 13:38:06 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/19 17:04:20 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"

class			Sorcerer
{
	std::string	_name;
	std::string	_title;
public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(const Sorcerer &a);
	~Sorcerer();

	Sorcerer &	operator = (const Sorcerer &a);

	std::string	getName(void) const;
	std::string	getTitle(void) const;
	void		polymorph(Victim const &) const;
};

std::ostream &	operator << (std::ostream &out, const Sorcerer &a);

#endif

