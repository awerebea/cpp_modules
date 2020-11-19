/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 17:51:00 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/21 20:19:28 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class			AWeapon
{
protected:
	std::string	_name;
	int			_apcost;
	int			_damage;
public:
	AWeapon(std::string const &name, int apcost, int damage);
	AWeapon(const AWeapon &a);
	virtual ~AWeapon();
	AWeapon &	operator = (const AWeapon &a);

	std::string		getName() const;
	int				getAPCost() const;
	int				getDamage() const;
	virtual void	attack() const = 0;
};

#endif
