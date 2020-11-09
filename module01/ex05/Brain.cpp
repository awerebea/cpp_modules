/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 14:08:56 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/09 14:55:05 by awerebea         ###   ########.fr       */
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
