/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 17:41:25 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/11 14:48:49 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class ZombieEvent {
private:
	int		_type;
public:
	ZombieEvent();
	~ZombieEvent();
	void	setZombieType(int type);
	Zombie*	newZombie(std::string name) const;
};

#endif
