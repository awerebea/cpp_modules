/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 16:50:29 by awerebea          #+#    #+#             */
/*   Updated: 2020/12/05 20:45:59 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void		func(T & x)
{
	x *= 2;
}

template <typename T>
void		iter(T *arr, size_t arrayLen, void (*func)(T &))
{
	for (size_t i = 0; i < arrayLen; ++i)
		func(arr[i]);
}

int			main()
{
	int		a[5] = {0, 1, 2, 3, 4};
	float	b[6] = {-2.2f, 3.3f, -4.4f, 5.5f, -6.6f, 7.7f};
	double	c[3] = {11.11, 22.22, 33.33};

	std::cout << std::endl;
	std::cout << "----- Test int array ----" << std::endl;
	std::cout << "Original array: ";
	for (size_t i = 0; i < 5; ++i)
		std::cout << a[i] << ", ";
	std::cout << std::endl;

	iter(a, 5, &func);

	std::cout << "Modified array: ";
	for (size_t i = 0; i < 5; ++i)
		std::cout << a[i] << ", ";
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "----- Test float array ----" << std::endl;
	std::cout << "Original array: ";
	for (size_t i = 0; i < 6; ++i)
		std::cout << b[i] << ", ";
	std::cout << std::endl;

	iter(b, 6, &func);

	std::cout << "Modified array: ";
	for (size_t i = 0; i < 6; ++i)
		std::cout << b[i] << ", ";
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "----- Test double array ----" << std::endl;
	std::cout << "Original array: ";
	for (size_t i = 0; i < 3; ++i)
		std::cout << c[i] << ", ";
	std::cout << std::endl;

	iter(c, 3, &func);

	std::cout << "Modified array: ";
	for (size_t i = 0; i < 3; ++i)
		std::cout << c[i] << ", ";
	std::cout << std::endl;

	return (0);
}
