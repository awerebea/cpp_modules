/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 16:49:37 by awerebea          #+#    #+#             */
/*   Updated: 2020/12/10 11:31:40 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iterator>

template <typename T>
class						MutantStack : public std::stack<T>
{
public:
							MutantStack():
								std::stack<T>() {};

							MutantStack(MutantStack<T> const & other):
								std::stack<T>(other) {};

	virtual					~MutantStack() {};

	MutantStack<T> &		operator=(MutantStack const & other)
	{
		if (this != & other)
			*this = other;
		return (*this);
	};

	class				iterator :
							std::iterator<std::bidirectional_iterator_tag, T>
	{
		T *				_p;
						iterator() {};
		public:
						iterator(T * p): _p(p) {};

						iterator(MutantStack<T>::iterator const & other)
						{ *this = other; };

		virtual			~iterator() {};

		MutantStack<T>::iterator &	operator=(MutantStack<T>::iterator \
															const & other)
		{
			if (this != & other)
				_p = other._p;
			return *this;
		};

		MutantStack<T>::iterator &	operator++()
		{
			_p--;
			return *this;
		};

		MutantStack<T>::iterator	operator++(int)
		{
			MutantStack<T>::iterator	ret = *this;
			_p--;
			return ret;
		};

		MutantStack<T>::iterator &	operator--()
		{
			_p++;
			return *this;
		};

		MutantStack<T>::iterator	operator--(int)
		{
			MutantStack<T>::iterator	ret = *this;
			_p++;
			return ret;
		};

		T &							operator*()
		{
			return *_p;
		};

		bool						operator==(MutantStack<T>::iterator const & other)
		{
			return _p == other._p;
		};

		bool						operator!=(MutantStack<T>::iterator const & other)
		{
			return _p != other._p;
		};

	};

	MutantStack<T>::iterator		begin()
	{
		return iterator(&this->top());
	};

	MutantStack<T>::iterator		end()
	{
		return iterator(&this->top() - this->size());
	};

};

#endif
