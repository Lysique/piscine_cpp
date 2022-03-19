/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:43:27 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/16 16:02:54 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain(void)
{
}

Brain::Brain(Brain const &cpy)
{
	*this = cpy; 
}

Brain::~Brain(void)
{
}

Brain	&Brain::operator=(Brain const &cpy)
{
	int	i;

	i = -1;
	while (++i < 100)
		this->ideas[i] = cpy.ideas[i];
	return (*this);
}
