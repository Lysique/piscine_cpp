/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 14:12:02 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/06 15:42:03 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen	karen;

	if (argc != 2)
	{
		std::cout << "Bad number of arguments" << std::endl;
		return (0);
	}
	if (karen.karenFilter(argv[1]) == 0)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	karen.complain("DEBUG");
	karen.complain("INFO");
	karen.complain("WARNING");
	karen.complain("ERROR");
}
