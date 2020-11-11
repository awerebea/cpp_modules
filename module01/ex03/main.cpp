/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 13:50:40 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/10 21:13:13 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <iostream>
#include <cmath>

int	isDecNum(std::string str)
{
	for (int i = 0; i < (int)str.length(); i++) {
		if (!((str[i] >= '0' && str[i] <= '9') \
			|| (!i && (str[i] == '-' || str[i] == '+'))))
			return (0);
	}
	return (1);
}

int	stringToNum(std::string str)
{
	long long int	result = 0;
	int				sign = 1;
	int				i = 0;

	while (i < (int)str.length() && (str[i] == '\n' || str[i] == '\t' \
			|| str[i] == '\v' || str[i] == '\r' \
			|| str[i] == '\f' || str[i] == ' '))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (i < (int)str.length() && str[i] >= '0' && str[i]<= '9') {
		if ((result * 10) < result) {
			return (sign < 0 ? 0 : -1);
		}
		result = result * 10 + str[i] - '0';
		i++;
	}
	return ((int)result * (int)sign);
}

int				main()
{
	int			N = -1;
	std::string	input;

	std::cout << "Input number of Zombies to create: ";
	while (N < 0) {
		std::getline(std::cin, input);
		if (isDecNum(input) && (N = stringToNum(input)) >= 0) {
			break ;
		}
		else
			std::cout << "Incorrect input. Try again: ";
	}
	ZombieHorde		zombies = ZombieHorde(N);
	zombies.announce();
	return (0);
}
