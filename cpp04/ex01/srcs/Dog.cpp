/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:29:54 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/16 16:24:46 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(void)
{
	this->_brain = new Brain;
	this->type = "Dog";
	std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog(Dog const &cpy)
{
	*this = cpy; 
}

Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << "Dog default destructor" << std::endl;
}

Dog	&Dog::operator=(Dog const &cpy)
{
	this->type = cpy.getType();
	*(this->_brain) = *(cpy.getBrain());
	return (*this);
}

Animal	&Dog::operator=(const Animal &cpy)
{
	this->type = cpy.getType();
	*(this->_brain) = *(cpy.getBrain());
	return *this;
}

Brain	*Dog::getBrain(void) const
{
	return (this->_brain);
}

void	Dog::makeSound(void) const
{
	std::cout << "WOOF" << std::endl;
}
