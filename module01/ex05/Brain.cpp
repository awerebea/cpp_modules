/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 14:08:56 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/11 14:48:47 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	this->_iq = 100;
}

Brain::~Brain() {}

std::string		Brain::identify() const
{
	std::stringstream	streamAddr;

	streamAddr << this;
	return (streamAddr.str());
}
