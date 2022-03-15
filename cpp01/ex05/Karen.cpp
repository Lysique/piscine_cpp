/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 14:12:31 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/06 15:16:50 by tamighi          ###   ########.fr       */
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

void	Karen::complain(std::string lvl)
{
	for (int i = 0; i < 4; i++)
	{
		if (lvl == lvls[i])
			(this->*complains[i])();
	}
}

void	Karen::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}
