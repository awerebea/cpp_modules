/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 17:16:03 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/11 14:48:44 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void memoryLeak() {
	std::string*	panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	delete panther;
}

int		main()
{
	memoryLeak();
	while (1)
		;
	return (0);
}
