/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 16:19:18 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/14 18:36:10 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

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

class			ScavTrap
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

	static const int			challengesCount;
	static const std::string	challengesSet[];

public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &a);
	~ScavTrap();

	ScavTrap &	operator = (const ScavTrap &a);

	int			getMember(void) const;
	std::string	getName(void) const;
	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		challengeNewcomer(void);
};

#endif
