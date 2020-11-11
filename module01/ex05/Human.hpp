/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 14:16:56 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/11 14:48:50 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"
# include <iostream>

class Human {
private:
	Brain		_brain;
public:
	Human();
	~Human();
	std::string		identify() const;
	const Brain&	getBrain() const;
};

#endif
