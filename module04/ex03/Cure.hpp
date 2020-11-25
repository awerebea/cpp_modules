/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 00:47:43 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/25 21:44:13 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class						Cure : public AMateria
{
public:
							Cure();
							Cure(const Cure &type);
							~Cure();
	Cure &					operator=(Cure const &a);

	const std::string &		getType() const; //Returns the materia type
	unsigned int			getXP() const; //Returns the Materia's XP

	AMateria *				clone() const;
	void					use(ICharacter &target);
};

#endif
