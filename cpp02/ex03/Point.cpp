/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 15:07:00 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/13 10:42:30 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(Fixed(0)), _y(Fixed(0))
{
}

Point::Point(const float x, const float y) : _x(Fixed(x)), _y(Fixed(y))
{
}

Point::Point(Point const &cpy)
{
	*this = cpy; 
}

Point::~Point(void)
{
}

Point	&Point::operator=(const Point &cpy)
{
	_x = cpy.getX();
	_y = cpy.getY();
	return (*this);
}

Fixed	Point::getX(void) const
{
	return (_x);
}

Fixed	Point::getY(void) const
{
	return (_y);
}

void	Point::setX(const Fixed f)
{
	_x = f;
}

void	Point::setY(const Fixed f)
{
	_y = f;
}

bool	Point::bsp(Point const a, Point const b, Point const c, Point const p) 
{
	Fixed	w1;
	Fixed	w2;

	w1 = a.getX() * (c.getY() - a.getY()) + (p.getY() - a.getY()) * (c.getX() - a.getX()) - p.getX() * (c.getY() - a.getY());
	w1 = w1 / ((b.getY() - a.getY()) * (c.getX() - a.getX()) - (b.getX() - a.getX()) * (c.getY() - a.getY()));
	w2 = p.getY() - a.getY() - w1 * (b.getY() - a.getY());
	if (c.getY() != a.getY())
		w2 = w2 / (c.getY() - a.getY());
	if (w1 <= 0 || w2 <= 0)
		return (false);
	else if (w1 + w2 >= 1)
		return (false);
	else
		return (true);
}
