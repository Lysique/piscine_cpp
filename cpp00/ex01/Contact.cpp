/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:45:08 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/05 16:04:20 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

void	Contact::setContactInfo(int info, std::string input)
{
	_contactInfos[info] = input;
}

std::string	Contact::getContactInfo(int info) const
{
	return (_contactInfos[info]);
}
