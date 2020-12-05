/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 14:10:19 by awerebea          #+#    #+#             */
/*   Updated: 2020/12/05 16:43:21 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void		swap(T & x, T & y)
{
	T	tmp = x;
	x = y;
	y = tmp;
}

template <typename T>
T const &	min(T const & x, T const & y)
{
	return (x < y ? x : y);
}

template <typename T>
T const &	max(T const & x, T const & y)
{
	return (x > y ? x : y);
}

// int			main()
// {
	// int		a = 42;
	// int		b = 21;

	// float	c = 42.42f;
	// float	d = 21.21f;

	// double	e = 123.45;
	// double	f = 678.90;

	// char	g = 'a';
	// char	h = 'z';

	// bool	i = true;
	// bool	j = false;

	// std::cout << "----- Test swap -----" << std::endl;

	// std::cout << "Before swap:\t" << a << ", " << b << std::endl;
	// swap(a, b);
	// std::cout << "After swap:\t" << a << ", " << b << std::endl;

	// std::cout << std::endl;
	// std::cout << "Before swap:\t" << c << ", " << d << std::endl;
	// swap(c, d);
	// std::cout << "After swap:\t" << c << ", " << d << std::endl;

	// std::cout << std::endl;
	// std::cout << "Before swap:\t" << e << ", " << f << std::endl;
	// swap(e, f);
	// std::cout << "After swap:\t" << e << ", " << f << std::endl;

	// std::cout << std::endl;
	// std::cout << "Before swap:\t" << g << ", " << h << std::endl;
	// swap(g, h);
	// std::cout << "After swap:\t" << g << ", " << h << std::endl;

	// std::cout << std::endl;
	// std::cout << std::boolalpha << "Before swap:\t" << i << ", " << j
		// << std::endl;
	// swap(i, j);
	// std::cout << std::boolalpha << "After swap:\t" << i << ", " << j
		// << std::endl;


	// std::cout << std::endl;
	// std::cout << "----- Test min -----" << std::endl;

	// std::cout << "min from " << a << "\tand\t" << b << "\t\tis: "
		// << min(a, b) << std::endl;

	// std::cout << "min from " << c << "\tand\t" << d << "\t\tis: "
		// << min(c, d) << std::endl;

	// std::cout << "min from " << e << "\tand\t" << f << "\t\tis: "
		// << min(e, f) << std::endl;

	// std::cout << "min from " << g << "\tand\t" << h << "\t\tis: "
		// << min(g, h) << std::endl;

	// std::cout << std::boolalpha << "min from " << i << "\tand\t" << j
		// << "\t\tis: " << min(i, j) << std::endl;


	// std::cout << std::endl;
	// std::cout << "----- Test max -----" << std::endl;

	// std::cout << "max from " << a << "\tand\t" << b << "\t\tis: "
		// << max(a, b) << std::endl;

	// std::cout << "max from " << c << "\tand\t" << d << "\t\tis: "
		// << max(c, d) << std::endl;

	// std::cout << "max from " << e << "\tand\t" << f << "\t\tis: "
		// << max(e, f) << std::endl;

	// std::cout << "max from " << g << "\tand\t" << h << "\t\tis: "
		// << max(g, h) << std::endl;

	// std::cout << std::boolalpha << "max from " << i << "\tand\t" << j
		// << "\t\tis: " << max(i, j) << std::endl;

	// return (0);
// }

int main( void )
{
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return 0;
}
