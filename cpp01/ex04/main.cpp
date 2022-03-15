/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 12:58:07 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/06 14:02:32 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	myReplace(std::ifstream &ifs, std::string s1, std::string s2, std::ofstream &ofs)
{
	std::string	str;
	size_t		pos;

	str.assign((std::istreambuf_iterator<char>(ifs)), std::istreambuf_iterator<char>());
	pos = str.find(s1);
	while (pos != std::string::npos)
	{
		str.erase(pos, s1.length());
		str.insert(pos, s2);
		pos = str.find(s1);
	}
	ofs << str;
}

void	myToString(std::string infile, std::string s1, std::string s2)
{
	std::ifstream	ifs;
	std::ofstream	ofs;

	if (s1 == "" || s2 == "")
	{
		std::cout << "Strings cannot be empty" << std::endl;
		return ;
	}
	ifs.open(infile); 
	if (ifs.is_open() == 0)
	{
		std::cout << "File could not open" << std::endl;
		return ;
	}
	ofs.open(infile.append(".replace"));
	myReplace(ifs, s1, s2, ofs);
	ifs.close();
	ofs.close();
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Bad number of arguments" << std::endl;
		return (1);
	}
	myToString(argv[1], argv[2], argv[3]);
}
