/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 18:43:47 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/25 21:46:29 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class						Ice : public AMateria
{
public:
							Ice();
							Ice(const Ice &type);
							~Ice();
	Ice &					operator=(Ice const &a);

	const std::string &		getType() const; //Returns the materia type
	unsigned int			getXP() const; //Returns the Materia's XP

	AMateria *				clone() const;
	void					use(ICharacter &target);
};

#endif
