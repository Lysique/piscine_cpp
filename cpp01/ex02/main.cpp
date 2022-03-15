/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 12:36:31 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/05 12:44:21 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;
	
	std::cout << &str << " : str address\n";
	std::cout << &(*stringPTR) << " : address of the value inside stringPTR\n";
	std::cout << &stringREF << " : stringREF address\n";
	std::cout << str << " : str value\n";
	std::cout << *stringPTR << " : value inside stringPTR\n";
	std::cout << stringREF << " : stringREF value\n";
}
