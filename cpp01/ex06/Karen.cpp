/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 14:12:31 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/06 15:45:24 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
	complains[0] = &Karen::debug;
	complains[1] = &Karen::info;
	complains[2] = &Karen::warning;
	complains[3] = &Karen::error;
	lvls[0] = "DEBUG";
	lvls[1] = "INFO";
	lvls[2] = "WARNING";
	lvls[3] = "ERROR";
}

Karen::~Karen(void)
{
}

int	Karen::karenFilter(std::string lvl)
{
	for (int j = 0; j < 4; j++)
	{
		if (lvls[j] == lvl)
			break ;
		complains[j] = &Karen::mute;
		if (j == 3)
			return (0);
	}
	return (1);
}

void	Karen::complain(std::string lvl)
{
	for (int i = 0; i < 4; i++)
	{
		if (lvl == lvls[i])
			(this->*complains[i])();
	}
}

void	Karen::mute(void)
{
}

void	Karen::debug(void)
{
	std::cout << "[ " << "DEBUG" << " ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
	std::cout << std::endl;
}

void	Karen::info(void)
{
	std::cout << "[ " << "INFO" << " ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
	std::cout << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "[ " << "WARNING" << " ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void	Karen::error(void)
{
	std::cout << "[ " << "ERROR" << " ]" << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}
