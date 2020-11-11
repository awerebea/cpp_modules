/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 17:41:15 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/11 14:48:49 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
private:
	std::string					_name;
	int							_type;
	static const std::string	_types[4];
public:
	Zombie(std::string _name ,int type);
	~Zombie();
	void	announce();
};

#endif
