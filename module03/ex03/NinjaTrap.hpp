/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 18:05:21 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/18 11:45:52 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"

class			NinjaTrap : public ClapTrap
{
public:
	NinjaTrap();
	NinjaTrap(std::string name);
	NinjaTrap(const NinjaTrap &a);
	~NinjaTrap();

	NinjaTrap &	operator = (const NinjaTrap &a);

	void		ninjaShoebox(FragTrap &a);
	void		ninjaShoebox(ScavTrap &a);
	void		ninjaShoebox(ClapTrap &a);
	void		ninjaShoebox(NinjaTrap &a);
};

#endif
