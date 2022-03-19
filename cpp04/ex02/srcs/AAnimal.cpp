/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:10:07 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/16 16:47:44 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AAnimal.hpp"

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal default destructor" << std::endl;
}

const std::string	AAnimal::getType(void) const
{
	return (this->type);
}
