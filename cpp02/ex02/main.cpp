/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:42:28 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/12 14:51:55 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed a(5.6f);
	Fixed b(5.6f);
	Fixed c(3);
	Fixed d(2);
	
	std::cout << "Comparison operators : \n\n";
	std::cout << "a : " << a << " b : " << b << " c : " << c << " d : " << d << std::endl;
	if (a == b)
		std::cout << "A == B" << std::endl;
	else
		std::cout << "A != B" << std::endl;
	if (a < c)
		std::cout << "A < C" << std::endl;
	else
		std::cout << "A >= C" << std::endl;
	if (a > b)
		std::cout << "A > B" << std::endl;
	else
		std::cout << "A <= B" << std::endl;
	if (a != c)
		std::cout << "A != C" << std::endl;
	else
		std::cout << "A == C" << std::endl;
	 
	std::cout << "\nMaths operators : \n\n";
	std::cout << "a + c = " << a + c << std::endl;
	std::cout << "a / d = " << a / d << std::endl;
	std::cout << "a * c = " << a * c << std::endl;
	std::cout << "a - b - c = " << a - b - c << std::endl;
	
	std::cout << "\nIncr operators : \n\n";

	a.setRawBits(0);
	std::cout << a << std::endl;
	std::cout << "++a : " << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << "a++ : " << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << "Max : " << Fixed::max( a, b ) << std::endl;
	std::cout << "Min : " << Fixed::min( a, b ) << std::endl;
	return (0);
}
