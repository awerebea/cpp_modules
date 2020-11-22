/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 20:38:09 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/22 20:44:27 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

# include "ISpaceMarine.hpp"

class			ISquad
{
public:
	virtual						~ISquad() {}
	virtual int					getCount() const = 0;
	virtual ISpaceMarine *		getUnit(int) const = 0;
	virtual int					push(ISpaceMarine*) = 0;
};

#endif
