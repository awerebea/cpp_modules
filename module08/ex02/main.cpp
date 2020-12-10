/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 16:46:33 by awerebea          #+#    #+#             */
/*   Updated: 2020/12/10 11:36:01 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "mutantstack.hpp"

int main()
{
	{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
	}

	std::cout << "----- Test float stack with postfix increment/decrement -----"
		<< std::endl;

	MutantStack<float> fstack;

	fstack.push(1.01);
	fstack.push(2.02);
	fstack.push(3.03);

	MutantStack<float>::iterator it = fstack.begin();
	MutantStack<float>::iterator ite = fstack.end();
	MutantStack<float>::iterator it2 = it++;

	std::cout << *it2 << std::endl;
	std::cout << *it-- << std::endl;
	std::cout << *it << std::endl;

	return 0;
}
