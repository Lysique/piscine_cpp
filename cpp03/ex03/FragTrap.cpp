/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 12:39:16 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/14 15:31:40 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) 
{
	this->_name = "";
	this->_hp = 100;
	this->_ep = 100;
	this->_ad = 30;
	this->_maxHp = 100;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) 
{
	this->_name = name;
	this->_hp = 100;
	this->_ep = 100;
	this->_ad = 30;
	this->_maxHp = 100;
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &cpy)
{
	std::cout << "FragTrap constructor called" << std::endl;
	*this = cpy; 
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &cpy)
{
	this->_hp = cpy._hp;
	this->_ep = cpy._ep;
	this->_ad = cpy._ad;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " asked for HighFive !" << std::endl;
}
