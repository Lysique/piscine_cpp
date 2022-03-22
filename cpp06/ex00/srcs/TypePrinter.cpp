/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypePrinter.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 08:58:38 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/22 12:15:10 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/TypePrinter.hpp"

TypePrinter::TypePrinter(char *arg)
{
	_arg = arg;
	_type = "none";
}

TypePrinter::TypePrinter(TypePrinter const &cpy)
{
	*this = cpy; 
}

TypePrinter::~TypePrinter(void)
{
}

TypePrinter	&TypePrinter::operator=(TypePrinter const &cpy)
{
	(void)cpy;
	return (*this);
}

void	TypePrinter::printType(void)
{
	if (this->_printSpStr())
		return ;
	try
	{
		this->_checkType();
		this->_printChar();
		this->_printInt();
		this->_printFloat();
		this->_printDouble();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	TypePrinter::_printChar(void)
{
	int	nb;

	std::cout << "char : ";
	if (this->_type == "char")
	{
		if (this->_arg[0] < 31 || this->_arg[0] == 127)
			std::cout << "non displayable" << std::endl;
		else
			std::cout << this->_arg[0] << std::endl;
	}
	else
	{
		nb = std::stoi(this->_arg);
		if (nb < 0 || nb > 127)
			std::cout << "impossible" << std::endl;
		else if (nb < 31 || nb == 127)
			std::cout << "non displayable" << std::endl;
		else
			std::cout << static_cast<char>(nb) << std::endl;
	}
}

void	TypePrinter::_printInt(void)
{
	int	nb;

	if (this->_type == "char")
		nb = static_cast<int>(this->_arg[0]);
	else
		nb = std::stoi(this->_arg);
	std::cout << "int : " << nb << std::endl;
}

void	TypePrinter::_printFloat(void)
{
	float	nb;

	if (this->_type == "char")
		nb = static_cast<float>(this->_arg[0]);
	else
		nb = std::stof(this->_arg);
	if (this->_type == "int" || this->_type == "char"
		|| nb == static_cast<int>(nb))
		std::cout << "float : " << nb << ".0f" << std::endl;
	else
		std::cout << "float : " << nb << "f" << std::endl;
}

void	TypePrinter::_printDouble(void)
{
	double	nb;

	if (this->_type == "char")
		nb = static_cast<double>(this->_arg[0]);
	else
		nb = std::stod(this->_arg);
	if (this->_type == "int" || this->_type == "char"
		|| nb == static_cast<int>(nb))
		std::cout << "double : " << nb << ".0" << std::endl;
	else
		std::cout << "double : " << nb << std::endl;
}

void	TypePrinter::_checkType(void)
{
	if (this->_arg[0] == 0)
		throw TypePrinter::EmptyString();
	if (this->_arg[1] == 0)
	{
		if (this->_arg[0] <= '9' && this->_arg[0] >= '0')
			this->_type = "int";
		else
			this->_type = "char";
		return ;
	}
	if ((this->_arg[0] >= '0' && this->_arg[0] <= '9')
		|| this->_arg[0] == '+' || this->_arg[0] == '-')
	{
		this->_type = "int";
		for (int i = 1; this->_arg[i]; i++)	
		{
			if (this->_arg[i] == '.')
			{
				if (this->_type != "int")
					throw InvalidType();
				this->_type = "double";
			}
			else if (this->_arg[i] == 'f')
			{
				if (this->_arg[i + 1])
					throw InvalidType();
				this->_type = "float";
			}
			else if (this->_arg[i] < '0' || this->_arg[i] > '9')
				throw InvalidType();
		}
	}
}

bool	TypePrinter::_printSpStr(void)
{
	for (int i = 0; i < 3; i++)	
	{
		if (this->_arg == TypePrinter::_spDoubles[i]
			|| this->_arg == TypePrinter::_spFloats[i])
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: " << _spFloats[i] << std::endl;
			std::cout << "double: " << _spDoubles[i] << std::endl;
			return (1);
		}
	}
	return (0);
}

std::string	TypePrinter::_spDoubles[3] = {"-inf", "+inf", "nan"};
std::string	TypePrinter::_spFloats[3] = {"-inff", "+inff", "nan"};
