/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 16:31:22 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/05 17:13:52 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

void			ponyOnTheHeap()
{
	std::cout << "Input name of the Pony, living  on the HEAP: ";
	std::string		name;
	std::getline(std::cin, name);

	Pony	*ponyOnTheHeap = new Pony(name);

	ponyOnTheHeap->sayHello();
	std::cout << "I live on the heap!" << std::endl;
	delete ponyOnTheHeap;
}

void			ponyOnTheStack()
{
	std::cout << "Input name of the Pony, living  on the STACK: ";
	std::string		name;
	std::getline(std::cin, name);

	Pony	ponyOnTheStack = Pony(name);

	ponyOnTheStack.sayHello();
	std::cout << "I live on the stack!" << std::endl;
}

int				main()
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}
