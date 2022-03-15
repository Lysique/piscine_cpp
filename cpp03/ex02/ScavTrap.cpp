/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 09:57:55 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/14 15:40:24 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap(void)
{	
	this->_name = "";
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 20;
	this->_maxHp = 100;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) 
{
	this->_name = name;
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 20;
	this->_maxHp = 100;
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &cpy)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	*this = cpy; 
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &cpy)
{
	this->_hp = cpy._hp;
	this->_ep = cpy._ep;
	this->_ad = cpy._ad;
	this->_maxHp = cpy._maxHp;
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_hp <= 0)
		std::cout << "ScavTrap " << this->_name << " is dead !" << std::endl;
	else if (this->_ep <= 0)
		std::cout << "ScavTrap " << this->_name << " has no more energy !" << std::endl;
	else
	{
		this->_ep -= 1;
		std::cout << "ScavTrap "<< this->_name << " attacks " << target << ", causing " << this->_ad << " points of damage!" << std::endl;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " entered in gate keeper mode !" << std::endl;
}
