/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 12:28:54 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/06 12:50:49 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _wep(0)
{
}

HumanB::~HumanB(void)
{
}

void	HumanB::attack(void) const
{
	if (!_wep)
		std::cout << _name << " attacks with his right foot" << std::endl;
	else
		std::cout << _name << " attacks with their " << _wep->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &wep)
{
	_wep = &wep;
}
