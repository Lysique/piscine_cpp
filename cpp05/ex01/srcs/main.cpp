/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 09:31:33 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/21 08:03:25 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

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

	std::cout << std::endl;
	
	Bureaucrat	cp("Jean", 120);
	Bureaucrat	bp("Bob", 70);
	Form		f("myForm", 100, 80);

	std::cout << f << std::endl;
	cp.signForm(f);
	bp.signForm(f);
}
