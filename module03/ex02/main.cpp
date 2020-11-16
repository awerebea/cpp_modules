/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 16:24:11 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/17 13:42:15 by awerebea         ###   ########.fr       */
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

	FragTrap	fragger("Fragger");
	ScavTrap	scavver("Scavver");

	std::cout << std::endl <<  "Test attack and repair" << std::endl;

	std::cout << std::endl;
	fragger.rangedAttack("Truffel");
	scavver.rangedAttack("Truffel");

	std::cout << std::endl;
	fragger.meleeAttack("Ranger");
	fragger.takeDamage(50);
	fragger.beRepaired(500);

	std::cout << std::endl;
	scavver.meleeAttack("Ranger");
	scavver.takeDamage(50);
	scavver.beRepaired(500);

	std::cout << std::endl;
	fragger.takeDamage(80);
	fragger.beRepaired(40);

	std::cout << std::endl;
	scavver.takeDamage(80);
	scavver.beRepaired(40);

	std::cout << std::endl;
	fragger.takeDamage(600);

	std::cout << std::endl;
	scavver.takeDamage(600);

	std::cout << std::endl <<  "Test vaulthunter_dot_exe" << std::endl;

	std::cout << std::endl;
	fragger.vaulthunter_dot_exe("Whissper");
	fragger.vaulthunter_dot_exe("Gunter");
	fragger.vaulthunter_dot_exe("Charlezz");
	fragger.vaulthunter_dot_exe("Whissper");
	fragger.vaulthunter_dot_exe("Dumber");

	std::cout << std::endl <<  "Test challengeNewcomer" << std::endl;

	std::cout << std::endl;
	scavver.challengeNewcomer();
	scavver.challengeNewcomer();
	scavver.challengeNewcomer();
	scavver.challengeNewcomer();
	scavver.challengeNewcomer();

	return (0);
}
