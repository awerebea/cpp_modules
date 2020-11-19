/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 18:45:34 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/21 21:56:14 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

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

class			Enemy
{
protected:
	int				_hp;
	std::string		_type;
public:
	Enemy(int hp, std::string const &type);
	Enemy(const Enemy &a);
	virtual ~Enemy();
	Enemy &		operator = (const Enemy &a);

	std::string		getType() const;
	int				getHP() const;
	virtual void	takeDamage(int);
};

#endif
