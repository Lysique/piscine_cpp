/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:10:36 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/22 15:48:21 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"

int	main(void)
{
	Array<int>			intArray(1);
	Array<std::string>	stringArray(4);
	Array<std::string>	otherStringArray;

	stringArray[0] = "Hi";
	stringArray[1] = "Hello";
	stringArray[2] = "How are you?";
	stringArray[3] = "Fine and you?";
	intArray[0] = 199;

	std::cout << "intArray.size() = " << intArray.size() << std::endl;
	std::cout << "stringArray.size() = " << stringArray.size() << std::endl;
	std::cout << std::endl;

	otherStringArray = stringArray;
	otherStringArray[3] = "I'm good, how about you?";

	for (int i = 0; i < stringArray.size(); i++)
		std::cout << stringArray[i] << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < otherStringArray.size(); i++)
		std::cout << otherStringArray[i] << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < intArray.size(); i++)
		std::cout << intArray[i] << std::endl;
	std::cout << std::endl;
	try
	{
		std::cout << stringArray[59] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << stringArray[-3] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
