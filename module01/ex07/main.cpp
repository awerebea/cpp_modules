/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 17:38:22 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/19 21:59:41 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>

int		printError()
{
	std::cout << "Wrong number of arguments." << std::endl;
	return (1);

}

std::
int		printError(std::string filename)
{
	std::cout << std::strerror(errno) << " " << filename << std::endl;
	return (1);
}

int		replace(std::string filename, std::string s1, std::string s2)
{
	std::ifstream	file(filename);
	if (!file.is_open())
		return (printError(filename));

	std::ofstream	out_file(filename + ".replace");
	if (!out_file.is_open())
		return (printError(filename + ".replace"));

	std::string		line;
	size_t			pos;
	while (std::getline(file, line))
	{
		pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.replace(pos, s1.length(), s2);
			pos += s2.length();
		}
		out_file << line << std::endl;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc != 4)
		return (printError());
	std::string filename(argv[1]);
	std::string s1(argv[2]);
	std::string s2(argv[3]);
	return (replace(filename, s1, s2));
}
