/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 10:18:46 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/10 17:20:36 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

public:

	Fixed(void);
	Fixed(const Fixed &cpy);
	Fixed(const int nb);
	Fixed(const float nb);
	~Fixed(void);

	Fixed &operator=(const Fixed &cpy);

	float	toFloat(void) const;
	int		toInt(void) const;
	void	setRawBits(int const raw);
	int		getRawBits(void) const;

private:

	int					_rawBits;
	int const static	_nbBits;
};

std::ostream	&operator<<(std::ostream &ostr, Fixed const &fixed);

 #endif
