/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 23:42:54 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/25 21:45:42 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Character_HPP
# define Character_HPP

# include "AMateria.hpp"

class							Character : public ICharacter
{
	std::string					_name;
	AMateria *					_inventory[4];
public:
								Character(std::string const &name);
								Character(Character const &a);
								~Character();

	Character &					operator=(Character const &a);
	std::string const &			getName() const;
	void						use(int idx, ICharacter &target);
	void						equip(AMateria *m);
	void						unequip(int idx);
};

#endif
