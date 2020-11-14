/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 16:24:11 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/16 14:43:37 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main()
{
	std::srand(time(nullptr));

	std::cout << std::endl <<  "Test constructors" << std::endl;
	std::cout << std::endl;

	FragTrap	fragger1("Fragger");
	FragTrap	fragger3;
	ScavTrap	scavver1("Scavver");
	ScavTrap	scavver3;

	std::cout << std::endl <<  "Test attack and repair" << std::endl;

	std::cout << std::endl;
	fragger1.rangedAttack("Truffel");
	scavver1.rangedAttack("Truffel");

	std::cout << std::endl;
	fragger3.meleeAttack("Ranger");
	fragger3.takeDamage(50);
	fragger3.beRepaired(500);

	std::cout << std::endl;
	scavver3.meleeAttack("Ranger");
	scavver3.takeDamage(50);
	scavver3.beRepaired(500);

	std::cout << std::endl;
	fragger1.takeDamage(80);
	fragger1.beRepaired(40);

	std::cout << std::endl;
	scavver1.takeDamage(80);
	scavver1.beRepaired(40);

	std::cout << std::endl;
	FragTrap	fragger2 = fragger1;
	fragger2.takeDamage(600);

	std::cout << std::endl;
	ScavTrap	scavver2 = scavver1;
	scavver2.takeDamage(600);

	std::cout << std::endl <<  "Test vaulthunter_dot_exe" << std::endl;

	std::cout << std::endl;
	fragger1.vaulthunter_dot_exe("Whissper");
	fragger1.vaulthunter_dot_exe("Gunter");
	fragger1.vaulthunter_dot_exe("Charlezz");
	fragger1.vaulthunter_dot_exe("Whissper");
	fragger1.vaulthunter_dot_exe("Dumber");

	std::cout << std::endl <<  "Test challengeNewcomer" << std::endl;

	std::cout << std::endl;
	scavver1.challengeNewcomer();
	scavver1.challengeNewcomer();
	scavver1.challengeNewcomer();
	scavver1.challengeNewcomer();
	scavver1.challengeNewcomer();

	return (0);
}
