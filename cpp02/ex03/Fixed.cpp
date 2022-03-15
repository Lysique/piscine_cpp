/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 12:30:06 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/12 14:47:20 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _rawBits(0)
{
}

Fixed::Fixed(const int nb)
{
	_rawBits = nb << Fixed::_nbBits;
}

Fixed::Fixed(const float nb)
{
	_rawBits = roundf(nb * (1 << Fixed::_nbBits)); 
}

Fixed::Fixed(Fixed const &cpy)
{
	*this = cpy; 
}

Fixed::~Fixed(void)
{
}

/*###############	OPERATORS ##############*/

/* COMPARISONS */

bool	Fixed::operator!=(const Fixed &cpy) const
{
	return (this->toFloat() != cpy.toFloat());
}

bool	Fixed::operator==(const Fixed &cpy)  const
{
	return (this->toFloat() == cpy.toFloat());
}

bool	Fixed::operator>(const Fixed &cpy) const
{
	return (this->toFloat() > cpy.toFloat());
}

bool	Fixed::operator<(const Fixed &cpy) const
{
	return (this->toFloat() < cpy.toFloat());
}

bool	Fixed::operator>=(const Fixed &cpy) const
{
	return (this->toFloat() >= cpy.toFloat());
}

bool	Fixed::operator<=(const Fixed &cpy) const
{
	return (this->toFloat() <= cpy.toFloat());
}

/* MATH */

Fixed Fixed::operator+(const Fixed &cpy) const
{
	Fixed	a;

	a.setRawBits(this->_rawBits + cpy._rawBits);
	return (a);
}

Fixed Fixed::operator-(const Fixed &cpy) const
{
	Fixed	a;

	a.setRawBits(this->_rawBits - cpy._rawBits);
	return (a);
}

Fixed Fixed::operator*(const Fixed &cpy) const
{
	Fixed	a;

	a.setRawBits((this->_rawBits  * cpy._rawBits) / (1 << Fixed::_nbBits));
	return (a);
}

Fixed Fixed::operator/(const Fixed &cpy) const
{
	Fixed	a;

	a.setRawBits(((float)this->_rawBits / cpy._rawBits) * (1 << Fixed::_nbBits));
	return (a);
}

/* INCREMENTS */

Fixed	&Fixed::operator++(void)
{
	_rawBits += 1;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	old(*this);

	++(*this);
	return (old);
}

Fixed	&Fixed::operator--(void)
{
	_rawBits -= 1;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	old(*this);

	--(*this);
	return (old);
}

/* ASSIGN */

Fixed	&Fixed::operator=(const Fixed &cpy)
{
	_rawBits = cpy.getRawBits();
	return (*this);
}

/* MAX / MIN */

Fixed	&Fixed::max(Fixed &a, Fixed &b) 
{
	if (a > b)
		return (a);
	else
		return (b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b) 
{
	if (a > b)
		return (a);
	else
		return (b);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b) 
{
	if (a < b)
		return (a);
	else
		return (b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b) 
{
	if (a < b)
		return (a);
	else
		return (b);
}

/* END OF OVERLOADS */

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
