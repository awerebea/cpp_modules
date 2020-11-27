/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 20:26:11 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/27 15:52:38 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat Bureaucrat_1("Bureaucrat_1", 0);
		std::cout << Bureaucrat_1;
		for (int i = 0; i < 100; ++i)
		{
			Bureaucrat_1.decrGrade();
			std::cout << Bureaucrat_1;
		}
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
	try
	{
		Bureaucrat Bureaucrat_2("Bureaucrat_2", 200);
		std::cout << Bureaucrat_2;
		for (int i = 0; i < 100; ++i)
		{
			Bureaucrat_2.decrGrade();
			std::cout << Bureaucrat_2;
		}
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
	try
	{
		Bureaucrat Bureaucrat_3("Bureaucrat_3", 140);
		std::cout << Bureaucrat_3;
		for (int i = 0; i < 100; ++i)
		{
			Bureaucrat_3.decrGrade();
			std::cout << Bureaucrat_3;
		}
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
	try
	{
		Bureaucrat Bureaucrat_4("Bureaucrat_4", 10);
		std::cout << Bureaucrat_4;
		for (int i = 0; i < 100; ++i)
		{
			Bureaucrat_4.incrGrade();
			std::cout << Bureaucrat_4;
		}
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
}
