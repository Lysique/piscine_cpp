/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:59:11 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/05 10:20:22 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Phonebook.hpp"

int	main(void)
{
	Phonebook pb;

	std::string command;
	while (1)
	{
		std::getline(std::cin, command);
		if (!command.compare("EXIT"))
			break ;
		else if (!command.compare("ADD"))
			pb.add();
		else if (!command.compare("SEARCH"))
			pb.search();
		else
			std::cout << "Please enter either EXIT, ADD or SEARCH.\n";
	}
	return (0);
}
