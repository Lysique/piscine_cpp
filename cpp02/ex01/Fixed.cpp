/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 12:30:06 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/10 17:19:18 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nb)
{
	std::cout << "Int constructor called" << std::endl;
	_rawBits = nb << Fixed::_nbBits;
}

Fixed::Fixed(const float nb)
{
	std::cout << "Float constructor called" << std::endl;
	_rawBits = roundf(nb * (1 << Fixed::_nbBits)); 
}

Fixed::Fixed(Fixed const &cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy; 
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &cpy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_rawBits = cpy.getRawBits();
	return (*this);
}

float	Fixed::toFloat(void) const
{
	return ((float)_rawBits  / (float)(1 << Fixed::_nbBits));
}

int	Fixed::toInt(void) const
{
	return ((int)(roundf)(_rawBits >> Fixed::_nbBits));
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_rawBits = raw;
}

int	Fixed::getRawBits(void) const
{
	return (_rawBits);
}

int	const Fixed::_nbBits = 8;

std::ostream	&operator<<(std::ostream &ostr, Fixed const &fixed)
{
	ostr << fixed.toFloat();
	return (ostr);
}
