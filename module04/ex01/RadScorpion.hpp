/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 19:13:03 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/21 21:56:31 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class			RadScorpion : public Enemy
{
public:
	RadScorpion();
	RadScorpion(const RadScorpion &a);
	~RadScorpion();
	RadScorpion &	operator = (const RadScorpion &a);
};

#endif
