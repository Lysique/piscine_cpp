/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:57:18 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/19 09:08:59 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"

Character::Character(std::string name) 
{
	this->_name = name;
	for (int i = 0; i < 4; i++)
		this->_metas[i] = 0;
}

Character::Character(Character const &cpy) 
{
	*this = cpy; 
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
		if (this->_metas[i])
			delete this->_metas[i];
}

Character	&Character::operator=(Character const &cpy)
{
	this->_name = cpy._name;
	for (int i = 0; i < 4; i++)
	{
		if (this->_metas[i])
			delete this->_metas[i];
		if (cpy._metas[i])
			this->_metas[i] = cpy._metas[i]->clone();
	}
	return (*this);
}

const std::string	&Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_metas[i] == 0)
		{
			this->_metas[i] = m;
			break ;
		}
	}
}

void	Character::unequip(int idx)
{
	for (int i = 0; i < 4; i++)
		if (idx == i)
			this->_metas[i] = 0;
}

void	Character::use(int idx, ICharacter &target)
{
	for (int i = 0; i < 4; i++)
		if (idx == i && this->_metas[i])
			this->_metas[i]->use(target);
}
