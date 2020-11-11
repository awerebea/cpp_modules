/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 13:57:08 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/11 14:48:47 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main()
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	strP = &str;
	std::string&	strR = str;

	std::cout << "Display using pointer:" << std::endl;
	std::cout << *strP << std::endl;

	std::cout << std::endl;
	std::cout << "Display using reference:" << std::endl;
	std::cout << strR << std::endl;
	return (0);
}
