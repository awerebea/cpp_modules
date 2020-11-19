/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 19:26:37 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/21 18:47:26 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

# ifndef COLOR_RED_BOLD
#  define COLOR_RED_BOLD "\033[1;31m"
# endif

# ifndef COLOR_GREEN_BOLD
#  define COLOR_GREEN_BOLD "\033[1;32m"
# endif

# ifndef COLOR_YELLOW_BOLD
#  define COLOR_YELLOW_BOLD "\033[1;33m"
# endif

# ifndef COLOR_BLUE_BOLD
#  define COLOR_BLUE_BOLD "\033[1;34m"
# endif

# ifndef COLOR_CYAN_BOLD
#  define COLOR_CYAN_BOLD "\033[1;36m"
# endif

# ifndef COLOR_RESET
#  define COLOR_RESET "\033[0m"
# endif

# ifndef MAX_AP
#  define MAX_AP 40
# endif

class			Character
{
	std::string		_name;
	int				_ap;
	AWeapon			*_weapon;
public:
	Character(std::string const &name);
	Character(const Character &a);
	~Character();

	Character &		operator = (const Character &a);

	std::string		getName() const;
	int				getAP() const;
	AWeapon *		getWeapon() const;

	void			recoverAP();
	void			equip(AWeapon*);
	void			attack(Enemy*);
};

std::ostream &		operator << (std::ostream &out, Character &a);

#endif
