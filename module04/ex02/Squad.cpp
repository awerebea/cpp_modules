/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 20:54:59 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/24 01:18:32 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Squad.hpp"

Squad::Squad() : _unitsCount(0), _units (nullptr) {}

Squad::~Squad()
{
	deleteUnits();
}

Squad::Squad(const Squad &a)
{
	*this = a;
}

Squad &			Squad::operator = (const Squad &a)
{
	if (this != &a)
	{
		if (_units)
			deleteUnits();
		for (int i = 0; i < a._unitsCount; ++i)
		{
			push(a.getUnit(i)->clone());
		}
	}
	return (*this);
}

void						Squad::deleteUnits()
{
	t_unitsList		*tmp = nullptr;

	for (int i = 0; i == _unitsCount; ++i)
	{
		tmp = _units->next;
		delete (_units->unit);
		delete (_units);
		_units = tmp;
	}
	_units = nullptr;
}

int							Squad::getCount() const
{
	return (_unitsCount);
}

ISpaceMarine *				Squad::getUnit(int n) const
{
	if (n < 0 || n >= _unitsCount)
		return (nullptr);

	t_unitsList		*tmpList = _units;

	for (; n; --n)
	{
		tmpList = tmpList->next;
	}
	return (tmpList->unit);
}

int							Squad::push(ISpaceMarine *a)
{
	if (!a)
		return (_unitsCount);


	if (!_unitsCount)
	{
		_units = new t_unitsList;
		_units->unit = a;
	}
	else
	{
		t_unitsList		*tmpList = _units;
		for (int i = 0; i < _unitsCount; ++i)
		{
			if (a == tmpList->unit)
				return (_unitsCount);
			if (tmpList->next)
				tmpList = tmpList->next;
		}
		tmpList->next = new t_unitsList;
		tmpList = tmpList->next;
		tmpList->unit = a;
		tmpList->next = nullptr;
	}
	return (++_unitsCount);
}
