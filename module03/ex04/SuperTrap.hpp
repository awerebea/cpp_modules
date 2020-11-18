/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 18:05:21 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/18 18:29:12 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class			SuperTrap : public FragTrap, public NinjaTrap
{
public:
	SuperTrap();
	SuperTrap(std::string name);
	SuperTrap(const SuperTrap &a);
	~SuperTrap();

	SuperTrap &	operator = (const SuperTrap &a);

	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

	using		FragTrap::rangedAttack;
	using		FragTrap::vaulthunter_dot_exe;

	using		NinjaTrap::meleeAttack;
	using		NinjaTrap::ninjaShoebox;
};

#endif
