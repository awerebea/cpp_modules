/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 16:24:11 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/17 19:03:32 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include <iostream>

int main()
{
	std::srand(time(nullptr));

	std::cout << std::endl <<  "Test constructors" << std::endl;
	std::cout << std::endl;

	FragTrap	fragger("Fragger");
	ScavTrap	scavver("Scavver");
	ClapTrap	robot;
	NinjaTrap	ninja("Ninnnjaaaa");
	NinjaTrap	kamikadze("Kamikadze");

	std::cout << std::endl <<  "Test ninjaShoebox" << std::endl;

	std::cout << std::endl;
	ninja.ninjaShoebox(fragger);
	ninja.ninjaShoebox(scavver);
	ninja.ninjaShoebox(robot);
	ninja.ninjaShoebox(kamikadze);

	return (0);
}
