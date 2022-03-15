/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 15:42:28 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/14 15:10:50 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Default"), _hp(10), _ep(10), _ad(0), _maxHp(10)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _ep(10), _ad(0), _maxHp(10)
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &cpy)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	*this = cpy; 
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &cpy)
{
	this->_hp = cpy._hp;
	this->_ep = cpy._ep;
	this->_ad = cpy._ad;
	this->_maxHp = cpy._maxHp;
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (_hp <= 0)
		std::cout << "ClapTrap " << _name << " is dead !" << std::endl;
	else if (_ep <= 0)
		std::cout << "ClapTrap " << _name << " has no more energy !" << std::endl;
	else
	{
		_ep -= 1;
		std::cout << "ClapTrap "<< _name << " attacks " << target << ", causing " << _ad << " points of damage!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hp <= 0)
		std::cout << "ClapTrap " << _name << " is already dead !" << std::endl;
	else
	{
		std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage !" << std::endl;
		_hp -= amount;
		if (_hp <= 0)
			std::cout << "ClapTrap " << _name << " is dead !" << std::endl;
		else
			std::cout << "ClapTrap " << _name << " has " << _hp << " hp !" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hp <= 0)
		std::cout << "ClapTrap " << _name << " is dead !" << std::endl;
	else if (_ep <= 0)
		std::cout << "ClapTrap " << _name << " has no more energy !" << std::endl;
	else
	{
		if ((int)(amount + _hp) <= _maxHp)
		{
			std::cout << "ClapTrap " << _name << " regenerate " << amount << " HP !" << std::endl;
			_hp += amount;
			_ep -= 1;
			std::cout << "ClapTrap " << _name << " has " << _hp << " HP !" << std::endl;
		}
		else
		{
			std::cout << "ClapTrap " << _name << " can't regenerate that much HP !" << std::endl;
			std::cout << "Current HPs : " << _hp << std::endl;
		}
	}
}
