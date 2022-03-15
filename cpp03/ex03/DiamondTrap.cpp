/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:14:33 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/14 15:30:28 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) 
{	
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->_name = "";
}

DiamondTrap::DiamondTrap(std::string name) 
{
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->_hp = FragTrap::_hp;
	this->_ep = ScavTrap::_ep;
	this->_ad = FragTrap::_ad;
	this->_maxHp = FragTrap::_maxHp;
	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &cpy)
{
	std::cout << "DiamondTrap constructor called" << std::endl;
	*this = cpy; 
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &cpy)
{
	this->_hp = cpy._hp;
	this->_ep = cpy._ep;
	this->_ad = cpy._ad;
	this->_maxHp = cpy._maxHp;
	return (*this);
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap name : " << this->_name << ", ClapTrap name : " << ClapTrap::_name << std::endl;
}
