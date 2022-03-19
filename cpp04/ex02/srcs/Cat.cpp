/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:30:38 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/16 16:38:52 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	this->_brain = new Brain;
	std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat(Cat const &cpy)
{
	*this = cpy; 
}

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << "Cat default destructor" << std::endl;
}

Cat	&Cat::operator=(Cat const &cpy)
{
	this->type = cpy.getType();
	*(this->_brain) = *(cpy.getBrain());
	return (*this);
}

AAnimal	&Cat::operator=(const AAnimal &cpy)
{
	this->type = cpy.getType();
	*(this->_brain) = *(cpy.getBrain());
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow I guess" << std::endl;
}

Brain	*Cat::getBrain(void) const
{
	return (this->_brain);
}
