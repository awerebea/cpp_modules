/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 13:07:10 by awerebea          #+#    #+#             */
/*   Updated: 2020/11/11 15:29:28 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

class Fixed {
	int					_val;
	static const int	_fract_bits = 8;
public:
	Fixed();
	Fixed(const Fixed& a);
	~Fixed();
	Fixed&				operator=(const Fixed& a);
	int					getRawBits(void) const;
	void				setRawBits(int const raw);
};

#endif
