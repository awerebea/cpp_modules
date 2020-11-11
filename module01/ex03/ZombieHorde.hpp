/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 13:52:10 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/11 14:48:49 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP

# include "Zombie.hpp"

class ZombieHorde {
private:
	int			_numOfZombies;
	Zombie*		_zombies;
public:
	ZombieHorde(int N);
	~ZombieHorde();
	void	announce();
};

#endif
