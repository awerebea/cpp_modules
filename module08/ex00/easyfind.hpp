/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 20:36:43 by awerebea          #+#    #+#             */
/*   Updated: 2020/12/07 22:00:38 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <stdexcept>

template <typename T>
typename T::iterator		easyfind(T &cont, int val)
{
	typename T::iterator	ret = std::find(cont.begin(), cont.end(), val);
	if (ret == cont.end())
		throw std::runtime_error("Error: value not found in container");
	return (ret);
}

#endif
