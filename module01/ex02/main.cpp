/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 17:41:04 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/09 14:43:41 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

/*
** Generate random name with lenght derived in argument, with no more then
** 2 consonants or 2 vowels in succession. First character is capitalized.
*/
std::string		randNameGen(int nameLen)
{
	std::string		name;
	int				charType;
	int				consInSuccession = 0;
	int				vowInSuccession = 0;
	char			vowels[] = "aeiouy";
	char			consonants[] = "bcdfghjklmnpqrstvwxz";

	for (int i = 0; i < nameLen; i++) {
		charType = std::rand() % 2;
		if (charType && consInSuccession < 2) {
			consInSuccession++;
			vowInSuccession = 0;
			name += consonants[std::rand() % 20];
		}
		else if (!charType && vowInSuccession < 2) {
			consInSuccession = 0;
			vowInSuccession++;
			name += vowels[std::rand() % 6];
		}
		else
			i--;
	}
	name[0] -= 32;
	return (name);
}


void			randomChamp() {
	std::cout << "Create random Zombie on the Stack:" << std::endl;

	std::srand(time(nullptr));
	Zombie		stackZombie = Zombie(randNameGen(std::rand() / 3 % 4 + 5),
															std::rand() % 4);
	stackZombie.announce();

	std::cout << std::endl << "Create random Zombie on the Heap:" << std::endl;
	ZombieEvent	champ;
	champ.setZombieType(std::rand() % 4);
	Zombie*	heapZombie = champ.newZombie(randNameGen(std::rand() / 3 % 4 + 5));
	heapZombie->announce();
	delete heapZombie;
	std::cout << std::endl;
}

int				main() {
	std::cout << "Create Zombie on the Stack:" << std::endl;
	Zombie	stackZombie = Zombie("Mr.Anderson", 2);
	stackZombie.announce();

	ZombieEvent	heapZombieCreator;
	std::cout << std::endl << "Create Zombie on the Heap:" << std::endl;
	heapZombieCreator.setZombieType(3);
	Zombie*	heapZombie = heapZombieCreator.newZombie("Morpheus");
	heapZombie->announce();
	delete heapZombie;
	std::cout << std::endl;
	randomChamp();
	return (0);
}
