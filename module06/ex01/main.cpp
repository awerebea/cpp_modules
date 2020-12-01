/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 22:05:19 by awerebea          #+#    #+#             */
/*   Updated: 2020/12/04 10:23:14 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
	std::string		s1;
	int				n;
	std::string		s2;
};

void *		serialize(void)
{
	char *						raw = new char[20];
	static std::string const	symbols =	"abcdefghijklmnopqrstuvwxyz" \
											"ABCDEFGHIJKLMNOPQRSTUVWXYZ" \
											"0123456789";
	for (int i = 0; i < 8; ++i)
		raw[i] = symbols[rand() % 62];
	*reinterpret_cast<int*>(raw + 8) = rand() % 2000001 - 1000000;
	for (int i = 0; i < 8; ++i)
		raw[i + sizeof(char) * 12] = symbols[rand() % 62];
	return (raw);
}

Data *		deserialize(void * raw)
{
	Data *	data = new Data;

	data->s1 = std::string(reinterpret_cast<char*>(raw), 8);
	data->n = *reinterpret_cast<int*>(static_cast<char*>(raw) + 8);
	data->s2 = std::string(reinterpret_cast<char*>(raw) + 12, 8);
	return (data);
}

int			main()
{
	void *	raw;
	Data *	data;

	srand(time(nullptr));

	for (int i = 0; i < 3; ++i)
	{
		raw = serialize();
		data = deserialize(raw);

		std::cout << "----- Test #" << i + 1 << " -----" << std::endl;

		std::cout	<< "s1:\t" << data->s1 << std::endl
					<< "n:\t" << data->n << std::endl
					<< "s2:\t" << data->s2 << std::endl;

		std::cout << std::endl;
		delete reinterpret_cast<char*>(raw);
		delete data;
	}
	return (0);
}
