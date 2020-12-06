/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 13:42:20 by awerebea          #+#    #+#             */
/*   Updated: 2020/12/06 18:20:14 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class				Array {
	T *				_arr;
	unsigned int	_size;
public:
					Array() {
						_arr = nullptr;
						_size = 0;
					}

					Array(unsigned int n) : _size(n) {
						_arr = new T[_size] ();
					}

					Array(Array<T> const & other) {
						*this = other;
					}

	Array<T> &		operator=(Array<T> const & other) {
						if (this != &other) {
							_arr = nullptr;
							if ((_size = other._size)) {
								_arr = new T[_size] ();
								for (unsigned int i = 0; i < _size; ++i)
									_arr[i] = other._arr[i];
							}
						}
						return (*this);
					}

					~Array() {
						if (_size)
							delete[] _arr;
					};

	class			outOfLimitsException : public std::exception {
						const char *	what() const throw () {
							return ("error: index is out of limits");
						}
					};

	T &				operator[](unsigned int ind) {
						if (ind >= _size)
							throw outOfLimitsException();
						return (_arr[ind]);
					}

	T const &		operator[](unsigned int ind) const {
						return (operator[](ind));
					}

	unsigned int	size() const {
						return (_size);
					}
};

#endif
