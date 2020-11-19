/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 18:40:33 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/21 21:57:13 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class			PowerFist : public AWeapon
{
public:
	PowerFist();
	PowerFist(const PowerFist &a);
	~PowerFist();
	PowerFist &	operator = (const PowerFist &a);

	void			attack() const;
};

#endif
