/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 17:03:04 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/30 17:28:57 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conv.hpp"

int main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cout << "Invalid number of arguments" << std::endl;
		return (1);
	}
	Conv	input(argv[1]);
	std::cout << input;
	return (0);
}
