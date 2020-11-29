/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 20:26:11 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/29 15:09:29 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Form Form_1("formular-1a", 0, 0);
		std::cout << Form_1;
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
	try
	{
		Form Form_2("formular-2a", 200, 200);
		std::cout << Form_2;
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
	try
	{
		Form Form_3("formular-3a", 50, 50);
		std::cout << Form_3;
		Bureaucrat bur("Clerk", 55);
		bur.signForm(Form_3);
		std::cout << bur;
		while (bur.getGrade() > Form_3.getGradeSign())
		{
			bur.incrGrade();
			std::cout << bur;
		}
		bur.signForm(Form_3);
		std::cout << Form_3;
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
}
