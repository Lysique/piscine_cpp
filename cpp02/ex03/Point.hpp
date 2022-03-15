/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 14:59:17 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/13 10:42:20 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point {

public:
	
	Point(void);
	Point(const Point &cpy);
	Point(const float x, const float y);
	~Point(void);
	Point	&operator=(const Point &cpy);

	Fixed	getX(void) const;
	Fixed	getY(void) const;
	void	setX(const Fixed p);
	void	setY(const Fixed p);

	static bool	bsp(Point const a, Point const b, Point const c, Point const point);

private:

	Fixed	_x;
	Fixed	_y;
};
