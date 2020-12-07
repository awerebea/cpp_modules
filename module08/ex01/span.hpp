/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 20:27:53 by awerebea          #+#    #+#             */
/*   Updated: 2020/12/08 02:13:25 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <list>
#include <stdexcept>
#include <algorithm>

class				Span
{
	unsigned int	_limit;
	std::list<int>	_lst;
	bool			_sorted;
					Span();
public:
					Span(unsigned int);
					Span(Span const &);
					~Span();
	Span &			operator=(Span const &);

	void			addNumber(int);

	template <typename T>
	void			addNumber(T first, T last)
	{
		if (_lst.size() + std::distance(first, last) > _limit)
			throw std::runtime_error("Error: not enough space for this range");
		while (first != last)
			addNumber(*first++);
	}


	unsigned int	shortestSpan();
	unsigned int	longestSpan();
};

#endif
