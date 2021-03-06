/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 14:16:21 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/11 14:48:47 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() {}
Human::~Human() {}

std::string	Human::identify() const
{
	return (this->_brain.identify());
}

const Brain&	Human::getBrain() const
{
	return (this->_brain);
}
