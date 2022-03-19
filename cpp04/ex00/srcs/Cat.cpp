/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:30:38 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/16 12:35:46 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat(Cat const &cpy)
{
	*this = cpy; 
}

Cat::~Cat(void)
{
	std::cout << "Cat default destructor" << std::endl;
}

Cat	&Cat::operator=(Cat const &cpy)
{
	(void)cpy;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow I guess" << std::endl;
}
