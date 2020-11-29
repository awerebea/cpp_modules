/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 20:26:11 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/29 14:22:55 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void shrubbery_test()
{
	std::cout << std::endl;
	std::cout << "----- ShrubberyCreationForm test -----" << std::endl;
	std::cout << std::endl;
	try
	{
		ShrubberyCreationForm treeForm("home");
		std::cout << treeForm;
		Bureaucrat bur("Clerk", 148);
		std::cout << bur;
		while (bur.getGrade() > treeForm.getGradeSign())
		{
			bur.incrGrade();
			std::cout << bur;
		}
		std::cout << treeForm;
		bur.executeForm(treeForm);
		bur.signForm(treeForm);
		std::cout << treeForm;
		bur.executeForm(treeForm);
		std::cout << bur;
		while (bur.getGrade() > treeForm.getGradeExecute())
		{
			bur.incrGrade();
			std::cout << bur;
		}
		bur.executeForm(treeForm);
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
}

void robotomy_test()
{
	std::cout << std::endl;
	std::cout << "----- RobotomyRequestForm test -----" << std::endl;
	std::cout << std::endl;
	try
	{
		RobotomyRequestForm roboForm("Robo");
		std::cout << roboForm;
		Bureaucrat bur("Clerk", 75);
		std::cout << bur;
		while (bur.getGrade() > roboForm.getGradeSign())
		{
			bur.incrGrade();
			std::cout << bur;
		}
		std::cout << roboForm;
		bur.executeForm(roboForm);
		bur.signForm(roboForm);
		std::cout << roboForm;
		bur.executeForm(roboForm);
		std::cout << bur;
		while (bur.getGrade() > roboForm.getGradeExecute())
		{
			bur.incrGrade();
			std::cout << bur;
		}
		bur.executeForm(roboForm);
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
}

void presidential_test()
{
	std::cout << std::endl;
	std::cout << "----- PresidentialPardonForm test -----" << std::endl;
	std::cout << std::endl;
	try
	{
		PresidentialPardonForm presidentialForm("Martin");
		std::cout << presidentialForm;
		Bureaucrat bur("Clerk", 30);
		std::cout << bur;
		while (bur.getGrade() > presidentialForm.getGradeSign())
		{
			bur.incrGrade();
			std::cout << bur;
		}
		std::cout << presidentialForm;
		bur.executeForm(presidentialForm);
		bur.signForm(presidentialForm);
		std::cout << presidentialForm;
		bur.executeForm(presidentialForm);
		std::cout << bur;
		while (bur.getGrade() > presidentialForm.getGradeExecute())
		{
			bur.incrGrade();
			std::cout << bur;
		}
		bur.executeForm(presidentialForm);
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
}

int main()
{
	srand(time(nullptr));
	shrubbery_test();
	robotomy_test();
	presidential_test();
}
