/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 13:41:22 by awerebea          #+#    #+#             */
/*   Updated: 2020/12/06 18:29:29 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int		main()
{
	try {
		std::cout << std::endl;
		std::cout << "----- Test 1. Empty array -----" << std::endl;

		Array<int> a;

		for (unsigned int i = 0; i < a.size(); ++i) {
			std::cout << a[i] << (i < a.size() - 1 ? ", " : "");
		}
		std::cout << std::endl;


		std::cout << std::endl;
		std::cout << "----- Test 2. Int array -----" << std::endl;

		Array<int> b(10);

		a = b;
		for (unsigned int i = 0; i < a.size(); ++i) {
			a[i] = (i + 1) * (i % 2 ? -1 : 1);
			std::cout << a[i] << (i < a.size() - 1 ? ", " : "");
		}
		std::cout << std::endl;


		std::cout << std::endl;
		std::cout << "----- Test 3. Float array -----" << std::endl;

		Array<float> c(5);

		for (unsigned int i = 0; i < c.size(); ++i) {
			c[i] = (100 * (i + 1)) * 1.2345e+36 * (i % 2 ? -1 : 1);
			std::cout << c[i] << (i < c.size() - 1 ? ", " : "");
		}
		std::cout << std::endl;


		std::cout << std::endl;
		std::cout << "----- Test 4. Double array -----" << std::endl;

		Array<double> d(5);

		for (unsigned int i = 0; i < d.size(); ++i) {
			d[i] = (100 * (i + 1)) * 1.2345e+36 * (i % 2 ? -1 : 1);
			std::cout << d[i] << (i < d.size() - 1 ? ", " : "");
		}
		std::cout << std::endl;

		std::cout << std::endl;
		std::cout << "----- Test 5. Construction by copy -----" << std::endl;

		Array<double> e(d);

		std::cout << "Copied array:   ";
		for (unsigned int i = 0; i < e.size(); ++i) {
			std::cout << e[i] << (i < e.size() - 1 ? ", " : "");
		}
		std::cout << std::endl;
		std::cout << "Modified array: ";
		for (unsigned int i = 0; i < e.size(); ++i) {
			e[i] = i + 0.55;
			std::cout << e[i] << (i < e.size() - 1 ? ", " : "");
		}
		std::cout << std::endl;
		std::cout << "Original array: ";
		for (unsigned int i = 0; i < d.size(); ++i) {
			std::cout << d[i] << (i < d.size() - 1 ? ", " : "");
		}
		std::cout << std::endl;

		std::cout << std::endl;
		std::cout << "----- Test 6. Out of limit index access -----"
			<< std::endl;
		std::cout << d[99] << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	return (0);
}
