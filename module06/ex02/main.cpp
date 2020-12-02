/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 11:36:01 by awerebea          #+#    #+#             */
/*   Updated: 2020/12/04 10:20:58 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *		objectMaker()
{
	int		type = rand() % 4;

	if (!type)
	{
		std::cout << "Generated object type: A" << std::endl;
		return (new A);
	}
	else if (type == 1)
	{
		std::cout << "Generated object type: B" << std::endl;
		return (new B);
	}
	else
	{
		std::cout << "Generated object type: C" << std::endl;
		return (new C);
	}
}

void		identify_from_pointer(Base * p)
{
	if (dynamic_cast<A*>(p) != nullptr)
		std::cout << "A";
	else if (dynamic_cast<B*>(p) != nullptr)
		std::cout << "B";
	else if (dynamic_cast<C*>(p) != nullptr)
		std::cout << "C";
	else
		std::cout << "unknown";
}

void		identify_from_reference(Base & p)
{
	try
	{
		A & tmp = dynamic_cast<A&>(p);
		std::cout << "A";
		static_cast<void>(tmp);
		return ;
	}
	catch (std::bad_cast & e) {}

	try
	{
		B & tmp = dynamic_cast<B&>(p);
		std::cout << "B";
		static_cast<void>(tmp);
		return ;
	}
	catch (std::bad_cast & e) {}

	try
	{
		C & tmp = dynamic_cast<C&>(p);
		std::cout << "C";
		static_cast<void>(tmp);
		return ;
	}
	catch (std::bad_cast & e) { std::cout << "unknown"; }
}

int			main()
{
	srand(time(nullptr));
	for (int i = 0; i < 5; ++i)
	{
		std::cout << "----- Test #" << i + 1 << " -----" << std::endl;
		Base *	obj = objectMaker();
		std::cout << "Identify from pointer: ";
		identify_from_pointer(obj);
		std::cout << ", identify from reference: ";
		identify_from_reference(* obj);
		std::cout << std::endl << std::endl;
		delete obj;
	}
	return (0);
}
