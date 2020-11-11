/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 13:52:03 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/11 14:48:46 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"
#include <iostream>

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

ZombieHorde::ZombieHorde(int N) : _numOfZombies(N) {

	std::srand(time(nullptr));
	if (N <= 0) return ;
	this->_zombies = static_cast<Zombie*>(operator new[] (N * sizeof(Zombie)));
	for (int i = 0; i < N; i++) {
		new (this->_zombies + i) Zombie(randNameGen(std::rand() / 3 % 4 + 5), \
															std::rand() % 4);
	}
}

ZombieHorde::~ZombieHorde() {
	for (int i = 0; i < this->_numOfZombies; i++) {
		this->_zombies[i].~Zombie();
	}
}

void		ZombieHorde::announce() {
	for (int i = 0; i < this->_numOfZombies; i++) {
		this->_zombies[i].announce();
	}
}
