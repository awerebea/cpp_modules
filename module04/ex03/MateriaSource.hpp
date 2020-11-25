/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 00:57:24 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/25 21:49:27 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class					MateriaSource : public IMateriaSource
{
	AMateria *			_inventory[4];
public:
						MateriaSource();
						MateriaSource(const MateriaSource &a);
						virtual ~MateriaSource();
	MateriaSource &		operator=(const MateriaSource &a);
	virtual void		learnMateria(AMateria *);
	virtual AMateria *	createMateria(std::string const &type);
};

#endif
