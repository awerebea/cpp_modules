/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 20:45:46 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/23 21:25:31 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

typedef struct	s_unitsList
{
	ISpaceMarine				*unit;
	struct s_unitsList			*next;
}				t_unitsList;

class			Squad : public ISquad
{
	int							_unitsCount;
	t_unitsList					*_units;
public:
	Squad();
	Squad(const Squad &a);
	Squad &						operator=(const Squad &a);
	virtual						~Squad();
	virtual int					getCount() const;
	virtual ISpaceMarine *		getUnit(int) const;
	virtual int					push(ISpaceMarine*);
	void						deleteUnits();
};

#endif
