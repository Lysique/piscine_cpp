/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 08:48:36 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/19 09:17:50 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		this->_metas[i] = 0;
}

MateriaSource::MateriaSource(MateriaSource const &cpy)
{
	*this = cpy; 
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_metas[i])
			delete this->_metas[i];
	}
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &cpy)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_metas[i])
			delete this->_metas[i];
		if (cpy._metas[i])
			this->_metas[i] = cpy._metas[i]->clone();
	}
	return (*this);
}

void		MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)	
	{
		if (!this->_metas[i])
		{
			this->_metas[i] = m;
			return ;
		}
	}
}	

AMateria	*MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < 4; i++)	
	{
		if (type == this->_metas[i]->getType())
			return (this->_metas[i]->clone());
	}
	return (0);
}	
