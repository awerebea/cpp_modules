/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 13:50:40 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/07 08:11:02 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <iostream>

int				main() {
	int			N;

	std::cout << "Input number of Zombies to create: ";
	std::cin >> N;
	if (!(N > 0))
		std::cout << "Incorrect input. Qiut." << std::endl;
	ZombieHorde		zombies = ZombieHorde(N);
	zombies.announce();
	return (0);
}
