/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 20:48:30 by awerebea          #+#    #+#             */
/*   Updated: 2020/12/08 02:08:35 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

					Span::Span() {}

					Span::Span(unsigned int N) : _limit(N), _sorted(false) {}

					Span::Span(Span const & other) { *this = other; }

					Span::~Span() { _lst.clear(); }

Span &				Span::operator=(Span const & other)
{
	if (this != &other)
	{
		_lst.clear();
		_limit = other._limit;
		_lst = other._lst;
		_sorted = other._sorted;
	}
	return *this;
}

void				Span::addNumber(int num)
{
	if (static_cast<unsigned int>(_lst.size()) == _limit)
		throw std::runtime_error("Error: object is full");
	_lst.push_back(num);
	_sorted = false;
}

unsigned int		Span::shortestSpan()
{
	if (_lst.size() < 2)
		throw std::runtime_error("Error: not enough numbers stored");
	if (!_sorted)
	{
		_lst.sort();
		_sorted = true;
	}
	std::list<int>::iterator	itFirst = _lst.begin();
	std::list<int>::iterator	itNext = ++_lst.begin();

	unsigned int				minDelta = std::abs(*itFirst++ - *itNext++);
	unsigned int				delta;
	while (itNext != _lst.end())
	{
		delta = std::abs(*itFirst++ - *itNext++);
		minDelta = std::min(minDelta, delta);
	}
	return minDelta;
}

unsigned int				Span::longestSpan()
{
	if (_lst.size() < 2)
		throw std::runtime_error("Error: not enough numbers stored");
	if (!_sorted)
	{
		_lst.sort();
		_sorted = true;
	}
	return std::abs(_lst.back() - _lst.front());
}
