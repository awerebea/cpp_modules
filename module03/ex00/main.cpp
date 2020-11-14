/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 16:24:11 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/14 17:55:12 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

int main()
{
	std::srand(time(nullptr));

	std::cout << std::endl <<  "Test constructors" << std::endl;
	std::cout << std::endl;

	FragTrap	robot;
	FragTrap	vinni("Vinni-Pooh");
	FragTrap	vinni_clon(vinni);

	std::cout << std::endl <<  "Test attack and repair" << std::endl;

	std::cout << std::endl;
	vinni.rangedAttack("Truffel");

	std::cout << std::endl;
	robot.meleeAttack("Ranger");
	robot.takeDamage(50);
	robot.beRepaired(500);

	std::cout << std::endl;
	vinni_clon.takeDamage(80);
	vinni_clon.beRepaired(40);

	std::cout << std::endl;
	robot = vinni_clon;
	robot.takeDamage(600);

	std::cout << std::endl <<  "Test vaulthunter_dot_exe" << std::endl;

	std::cout << std::endl;
	vinni.vaulthunter_dot_exe("Whissper");
	vinni.vaulthunter_dot_exe("Gunter");
	vinni.vaulthunter_dot_exe("Charlezz");
	vinni.vaulthunter_dot_exe("Whissper");
	vinni.vaulthunter_dot_exe("Dumber");

	return (0);
}
