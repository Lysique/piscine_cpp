/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:11:26 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/23 14:43:42 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyfind.tpp"

int	main(void)
{
	std::list<int>	lst;
	std::list<int>::iterator	it;

	lst.push_back(5);
	lst.push_back(2);
	lst.push_back(9);
	lst.push_back(1);
	try
	{
		it = easyfind(lst, 2);
		std::cout << *it << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
