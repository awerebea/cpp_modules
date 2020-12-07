/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 01:16:57 by awerebea          #+#    #+#             */
/*   Updated: 2020/12/08 02:30:07 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "span.hpp"

int			main()
{
	{
	Span	sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	}

	std::cout << "----- Test 1. Overflow -----" << std::endl; {
	Span	sp = Span(5);
	try
	{
		for (int i = 1; i < 100; ++i)
		{
			sp.addNumber(i);
			std::cout << i << " ";
		}
		std::cout << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e) {std::cout << std::endl << e.what() << std::endl;}
	}

	std::cout << std::endl << "----- Test 2. Empty -----" << std::endl; {
	Span	sp = Span(5);
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e) { std::cout << e.what() << std::endl; }
	}

	std::cout << std::endl << "----- Test 3. One number -----" << std::endl; {
	Span	sp = Span(5);
	try
	{
		sp.addNumber(21);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e) { std::cout << e.what() << std::endl; }
	}

	std::cout << std::endl << "----- Test 4. Range of iterators -----"
		<< std::endl; {
	Span				sp = Span(5);
	std::vector<int>	vec = {-120, 23, 1, 200000, 1};
	try
	{
		for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
			std::cout << *it << " ";
		std::cout << std::endl;
		sp.addNumber(vec.begin(), vec.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e) { std::cout << e.what() << std::endl; }
	}

	std::cout << std::endl << "----- Test 5. Range overflow -----"
		<< std::endl; {
	Span				sp = Span(5);
	std::vector<int>	vec = {0,1,2,3,4,5,4,3,2,1,0};
	try
	{
		for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
			std::cout << *it << " ";
		std::cout << std::endl;
		sp.addNumber(vec.begin(), vec.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e) { std::cout << e.what() << std::endl; }
	}

	std::cout << std::endl << "----- Test 6. Huge range -----"
		<< std::endl; {
	Span				sp = Span(1000000);
	std::vector<int>	vec(1000000);
	srand(time(nullptr));
	try
	{
		for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
			*it = rand() % 2000000001 - 1000000000;
		sp.addNumber(vec.begin(), vec.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e) { std::cout << e.what() << std::endl; }
	}

	return (0);
}
