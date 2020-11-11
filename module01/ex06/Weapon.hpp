/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 15:34:39 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/11 14:48:50 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {
private:
	std::string	_type;
public:
	Weapon(std::string type);
	~Weapon();
	const std::string&	getType() const;
	void				setType(std::string type);
};

#endif
