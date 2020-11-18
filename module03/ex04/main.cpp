/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 16:24:11 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/18 18:08:45 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include <iostream>

int main()
{
	std::srand(time(nullptr));

	std::cout << std::endl <<  "Test constructors" << std::endl;
	std::cout << std::endl;

	FragTrap	fragger("Fragger");
	ScavTrap	scavver("Scavver");
	NinjaTrap	ninja("Ninnnjaaaa");
	SuperTrap	super("Suppper");

	std::cout << std::endl <<  "Test SuperTrap" << std::endl;

	std::cout << std::endl;
	super.meleeAttack("Bob");
	super.rangedAttack("Fred");
	super.takeDamage(50);
	super.beRepaired(30);

	std::cout << std::endl <<  "Test Super Shoebox" << std::endl;

	std::cout << std::endl;
	super.ninjaShoebox(fragger);
	super.ninjaShoebox(scavver);
	super.ninjaShoebox(ninja);

	return (0);
}
