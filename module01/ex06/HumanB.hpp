/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 17:04:16 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/11 14:48:50 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanB {
private:
	std::string	_name;
	Weapon		*_weapon;
public:
	HumanB(std::string name);
	~HumanB();
	void	attack() const;
	void	setWeapon(Weapon &weapon);
};

#endif
