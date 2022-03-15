/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 10:18:46 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/10 12:56:55 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

public:

	Fixed(void);
	Fixed(const Fixed &cpy);
	~Fixed(void);

	Fixed &operator=(const Fixed &cpy);

	void	setRawBits(int const raw);
	int		getRawBits(void) const;

private:

	int					_rawBits;
	int const static	_nbBits;
};

 #endif
