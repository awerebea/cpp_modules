/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 20:26:11 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/29 18:27:47 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
	srand(time(nullptr));

	std::cout << std::endl;
	std::cout << "----- UnknownForm test -----" << std::endl;
	std::cout << std::endl;
	try
	{
		Intern			someRandomIntern;
		Form*			rrf;
		rrf = someRandomIntern.makeForm("bla bla bla", "Luther");
		std::cout << *rrf << std::endl;

		Bureaucrat		bur("Clerk", 1);
		bur.signForm(*rrf);
		bur.executeForm(*rrf);
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}

	std::cout << std::endl;
	std::cout << "----- ShrubberyCreationForm test -----" << std::endl;
	std::cout << std::endl;
	try
	{
		Intern			someRandomIntern;
		Form*			rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "home");
		std::cout << *rrf << std::endl;

		Bureaucrat		bur("Clerk", 1);
		bur.signForm(*rrf);
		bur.executeForm(*rrf);
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}

	std::cout << std::endl;
	std::cout << "----- RobotomyRequestForm test -----" << std::endl;
	std::cout << std::endl;
	try
	{
		Intern			someRandomIntern;
		Form*			rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << *rrf << std::endl;

		Bureaucrat		bur("Clerk", 1);
		bur.signForm(*rrf);
		bur.executeForm(*rrf);
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}

	std::cout << std::endl;
	std::cout << "----- PresidentialPardonForm test -----" << std::endl;
	std::cout << std::endl;
	try
	{
		Intern			someRandomIntern;
		Form*			rrf;
		rrf = someRandomIntern.makeForm("presidential pardon", "Martin");
		std::cout << *rrf << std::endl;

		Bureaucrat		bur("Clerk", 1);
		bur.signForm(*rrf);
		bur.executeForm(*rrf);
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
}
