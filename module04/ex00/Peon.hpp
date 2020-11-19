/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 16:33:48 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/19 16:57:25 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
#include "Victim.hpp"

class			Peon : public Victim
{
public:
	Peon(std::string name);
	Peon(const Peon &a);
	~Peon();

	Peon &	operator = (const Peon &a);

	void		getPolymorphed(void) const;
};

#endif
