/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 20:34:48 by awerebea          #+#    #+#             */
/*   Updated: 2020/12/07 19:43:07 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include <set>
#include "easyfind.hpp"

int				main()
{
	srand(time(nullptr));
	std::vector<int>			numbers = {0,1,2,3,4,5,6,7,8,9};
	std::vector<int>::iterator	number;
	int targetVal = rand() % 10;

	std::cout << std::endl << "----- Test 1. Vector -----" << std::endl; {

	std::random_shuffle(numbers.begin(), numbers.end());
	number = numbers.begin();

	std::vector<int>			a(10);
	std::vector<int>::iterator	it;

	for (it = a.begin(); it != a.end(); ++it)
	{
		*it = *number++;
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	try {
		for (int i = 1; i; ++i) {
			targetVal = (i > 1 ? rand() % 20 : rand() % 10);
			std::cout << "Try to find " << targetVal << ". ";
				it = easyfind(a, targetVal);
			std::cout << "It's found on position # "
				<< std::distance(a.begin(), it) + 1 << std::endl;
		}
	}
	catch (std::exception & e) { std::cout << e.what() << std::endl; }
	}

	std::cout << std::endl << "----- Test 2. List -----" << std::endl; {

	std::random_shuffle(numbers.begin(), numbers.end());
	number = numbers.begin();

	std::list<int>				a(10);
	std::list<int>::iterator	it;

	for (it = a.begin(); it != a.end(); ++it)
	{
		*it = *number++;
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	try {
		for (int i = 1; i; ++i) {
			targetVal = (i > 1 ? rand() % 20 : rand() % 10);
			std::cout << "Try to find " << targetVal << ". ";
				it = easyfind(a, targetVal);
			std::cout << "It's found on position # "
				<< std::distance(a.begin(), it) + 1 << std::endl;
		}
	}
	catch (std::exception & e) { std::cout << e.what() << std::endl; }
	}

	std::cout << std::endl << "----- Test 3. Set -----" << std::endl; {

	std::random_shuffle(numbers.begin(), numbers.end());
	number = numbers.begin();

	std::set<int>				a;
	std::set<int>::iterator		it;

	while (number != numbers.end())
		a.insert(*number++);
	for (it = a.begin(); it != a.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;

	try {
		for (int i = 1; i; ++i) {
			targetVal = (i > 1 ? rand() % 20 : rand() % 10);
			std::cout << "Try to find " << targetVal << ". ";
				it = easyfind(a, targetVal);
			std::cout << "It's found on position # "
				<< std::distance(a.begin(), it) + 1 << std::endl;
		}
	}
	catch (std::exception & e) { std::cout << e.what() << std::endl; }
	}

	return (0);
}
