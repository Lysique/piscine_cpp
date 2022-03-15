/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 16:26:46 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/05 16:05:46 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
	_count = 0;
}

Phonebook::~Phonebook(void)
{
}

std::string	getContactInput(int info)
{
	std::string	input;

	if (info == FIRST_NAME)
		std::cout << "Enter first name" << std::endl;
	else if (info == LAST_NAME)
		std::cout << "Enter last name" << std::endl;
	else if (info == NICKNAME)
		std::cout << "Enter nickname" << std::endl;
	else if (info == PHONE_NUMBER)
		std::cout << "Enter phone number" << std::endl;
	else if (info == DARKEST_SECRET)
		std::cout << "Enter darkest secret" << std::endl;
	std::getline(std::cin, input);
	if (!input[0])
	{
		std::cout << "Can't be blank" << std::endl;
		return (getContactInput(info));
	}
	else
		return (input);
}

void	Phonebook::add(void)
{
	if (_count < 8)
		_count += 1;
	_contacts[_count - 1].setContactInfo(FIRST_NAME, getContactInput(FIRST_NAME));
	_contacts[_count - 1].setContactInfo(LAST_NAME, getContactInput(LAST_NAME));
	_contacts[_count - 1].setContactInfo(NICKNAME, getContactInput(NICKNAME));
	_contacts[_count - 1].setContactInfo(PHONE_NUMBER, getContactInput(PHONE_NUMBER));
	_contacts[_count - 1].setContactInfo(DARKEST_SECRET, getContactInput(DARKEST_SECRET));
}

void	print_my_info(std::string info)
{
	int	k;
	int	j;

	k = 0;
	j = 0;
	for (; j + info.length() < 10; j++)
		std::cout << " ";
	while (j < 10)
	{
		if (info.length() >= 10 && j == 9)
			std::cout << ".";
		else
			std::cout << info[k++];
		j++;
	}
}

void	Phonebook::search(void) const
{
	std::string	index;

	for (int i = 0; i < _count; i++)
	{
		print_my_info(std::to_string(i + 1));
		std::cout << "|";
		print_my_info(_contacts[i].getContactInfo(FIRST_NAME));
		std::cout << "|";
		print_my_info(_contacts[i].getContactInfo(LAST_NAME));
		std::cout << "|";
		print_my_info(_contacts[i].getContactInfo(NICKNAME));
		std::cout << "|" << std::endl;
	}
	std::cout << "Enter an index." << std::endl;
	std::getline(std::cin, index);
	if (index[0] < '1' || index[0] - '0' > _count || index[1])
	{
		std::cout << "Bad index input. Command canceled." << std::endl;
		return ;
	}
	std::cout << "First name : " << _contacts[index[0] - '0' - 1].getContactInfo(FIRST_NAME) << std::endl;
	std::cout << "Last name : "<< _contacts[index[0] - '0' - 1].getContactInfo(LAST_NAME) << std::endl;
	std::cout << "Nickname : " << _contacts[index[0] - '0' - 1].getContactInfo(NICKNAME) << std::endl;
	std::cout <<"Phone number : " << _contacts[index[0] - '0' - 1].getContactInfo(PHONE_NUMBER) << std::endl;
	std::cout << "Darkest secret : " << _contacts[index[0] - '0' - 1].getContactInfo(DARKEST_SECRET) << std::endl;
}
