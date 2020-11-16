/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 16:19:18 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/16 15:58:57 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

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

# ifndef COLOR_RESET
#  define COLOR_RESET "\033[0m"
# endif

# include <iostream>

class			FragTrap
{
	int			_hitPoints;
	int			_maxHitPoints;
	int			_energyPoints;
	int			_maxEnergyPoints;
	int			_level;
	std::string	_name;
	int			_meleeAttackDamage;
	int			_rangedAttackDamage;
	int			_armorDamageReduction;

public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &a);
	~FragTrap();

	FragTrap &	operator = (const FragTrap &a);

	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		vaulthunter_dot_exe(std::string const & target);
};

#endif
