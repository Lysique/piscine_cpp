/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:42:28 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/13 10:43:56 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int	main(void)
{
	Point	p1(2, 2);
	Point	p2(2, 5);
	Point	p3(5, 2);
	Point	p4(3, 4);

	if (Point::bsp(p1, p2, p3, p4))
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
}
