/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 09:31:33 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/19 13:19:37 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	cp ("Manuel", 152);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	cp("Jean-Xavier", 1);

		std::cout << cp << std::endl;
		cp.incrGrade();
		std::cout << cp << std::endl;
	}
	catch (std::exception	&e)
	{
		std::cout << e.what() << std::endl;
	}
}
