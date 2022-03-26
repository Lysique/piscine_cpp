/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 10:25:25 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/26 11:28:33 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"
#include <time.h>

int	main(void)
{
	{
		Span	span(5);

		try
		{
			span.addNumber(7);
			span.addNumber(10);
			span.addNumber(-1);
			span.addNumber(11);
			span.addNumber(-11);
			std::cout << "Shortest span : " << span.shortestSpan() << std::endl;
			std::cout << "Longest span : " << span.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		Span	span(10000);

		srand(time(NULL));
		try
		{
			for (int i = 0; i < 10000; i++)
				span.addNumber(rand() % 10000000);
			std::cout << "Shortest span : " << span.shortestSpan() << std::endl;
			std::cout << "Longest span : " << span.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		Span	span(10000);
		std::vector<int>	vect;

		srand(time(NULL));
		try
		{
			for (int i = 0; i < 100; i++)
				vect.push_back(rand() % 100000);
			span.addRangeNumber(vect.begin(), vect.end());
			std::cout << "Shortest span : " << span.shortestSpan() << std::endl;
			std::cout << "Longest span : " << span.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}
