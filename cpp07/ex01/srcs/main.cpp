/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:55:12 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/22 15:06:10 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/iter.hpp"

void	toUp(char &c)
{
	c = toupper(c);
}

void	incr(int &nb)
{
	nb++;
}

int	main(void)
{
	int		nb[5] = {1, 2, 3, 4, 5};
	char	s[6] = "hello";

	::iter(nb, 5, incr);
	::iter(s, 5, toUp);
	std::cout << s << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << nb[i] << std::endl;
}
