/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:33:46 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/22 12:54:46 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"
#include "../includes/A.hpp"
#include "../includes/B.hpp"
#include "../includes/C.hpp"
#include <time.h>

Base * generate(void)
{
	int	nb;

	srand(time(NULL));
	nb = rand() % 3;
	if (nb == 0)
		return (new A);
	else if (nb == 1)
		return (new B);
	else
		return (new C);
}

void identify(Base* p)
{
	Base	*base;

	base = dynamic_cast<A *>(p);
	if (base)
	{
		std::cout << "Base A identified." << std::endl;
		return ;
	}
	base = dynamic_cast<B *>(p);
	if (base)
	{
		std::cout << "Base B identified." << std::endl;
		return ;
	}
	base = dynamic_cast<C *>(p);
	if (base)
		std::cout << "Base C identified." << std::endl;
}

void identify(Base& p)
{
	Base	base;

	try
	{
		base = dynamic_cast<A&>(p);
		std::cout << "Ref base A identified." << std::endl;
		return ;
	}
	catch (std::exception &e)
	{
	}
	try
	{
		base = dynamic_cast<B&>(p);
		std::cout << "Ref base B identified." << std::endl;
		return ;
	}
	catch (std::exception &e)
	{
	}
	try
	{
		base = dynamic_cast<C&>(p);
		std::cout << "Ref base C identified." << std::endl;
		return ;
	}
	catch (std::exception &e)
	{
	}
}

int	main(void)
{
	Base	*base;

	base = generate();
	identify(base);
	identify(*base);
	delete base;
}
