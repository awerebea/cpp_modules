/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 18:01:31 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/25 21:46:05 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class						AMateria
{
protected:
	std::string const		_type;
	unsigned int			_xp;
public:
							AMateria(std::string const &type);
							AMateria(AMateria const &type);
	virtual					~AMateria();
	AMateria &				operator=(AMateria const &a);

	std::string const &		getType() const; //Returns the materia type
	unsigned int			getXP() const; //Returns the Materia's XP

	virtual AMateria *		clone() const = 0;
	virtual void			use(ICharacter &target);
};

#endif
