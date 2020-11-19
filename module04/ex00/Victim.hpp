/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 16:09:53 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/19 16:57:33 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

# ifndef COLOR_RED_BOLD
#  define COLOR_RED_BOLD "\033[1;31m"
# endif

# ifndef COLOR_GREEN_BOLD
#  define COLOR_GREEN_BOLD "\033[1;32m"
# endif

# ifndef COLOR_YELLOW_BOLD
#  define COLOR_YELLOW_BOLD "\033[1;33m"
# endif

# ifndef COLOR_BLUE_BOLD
#  define COLOR_BLUE_BOLD "\033[1;34m"
# endif

# ifndef COLOR_CYAN_BOLD
#  define COLOR_CYAN_BOLD "\033[1;36m"
# endif

# ifndef COLOR_RESET
#  define COLOR_RESET "\033[0m"
# endif

class			Victim
{
protected:
	std::string	_name;
public:
	Victim(std::string name);
	Victim(const Victim &a);
	~Victim();

	Victim &	operator = (const Victim &a);

	std::string		getName(void) const;
	std::string		getTitle(void) const;
	virtual void	getPolymorphed(void) const;
};

std::ostream &	operator << (std::ostream &out, const Victim &a);

#endif

