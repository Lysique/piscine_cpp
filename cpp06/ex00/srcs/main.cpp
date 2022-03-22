/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 08:49:53 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/22 10:12:33 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/TypePrinter.hpp"

int	main(int argc, char **argv)
{
	TypePrinter	*tp;

	if (argc != 2)
		std::cout << "Please enter one argument." << std::endl;
	tp = new TypePrinter(argv[1]);
	tp->printType();
	delete tp;
}
