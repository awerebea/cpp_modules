/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 16:55:49 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/21 21:56:53 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class			SuperMutant : public Enemy
{
public:
	SuperMutant();
	SuperMutant(const SuperMutant &a);
	~SuperMutant();
	SuperMutant &	operator = (const SuperMutant &a);

	void	takeDamage(int);
};

#endif
