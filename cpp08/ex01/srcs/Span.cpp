/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 10:25:07 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/26 11:30:20 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

Span::Span(unsigned int N) : _maxNb(N)
{
}

Span::Span(Span const &cpy)
{
	*this = cpy; 
}

Span::~Span(void)
{
}

Span	&Span::operator=(Span const &cpy)
{
	this->_maxNb = cpy._maxNb;
	this->_vec = cpy._vec;
	return (*this);
}

void	Span::addNumber(int number)
{
	if (this->_vec.size() == _maxNb)
		throw NotEnoughSizeException();
	this->_vec.push_back(number);
}

int	Span::shortestSpan(void)
{
	int							diffSize;
	std::vector<int>			vec;
	std::vector<int>::iterator	it;

	if (this->_vec.size() < 2)
		throw NotEnoughNumbersException();
	vec = this->_vec;
	std::sort(vec.begin(), vec.end());
	diffSize = (*vec.begin() + 1) - *vec.begin();
	for (it = vec.begin(); it != vec.end() - 1; it++)
	{
		if (*(it + 1) - *it < diffSize)
			diffSize = *(it + 1) - *it;
	}
	return (diffSize);
}

int	Span::longestSpan(void)
{
	std::vector<int>	vec;

	if (this->_vec.size() < 2)
		throw NotEnoughNumbersException();
	vec = this->_vec;
	std::sort(vec.begin(), vec.end());
	return (*(vec.end() - 1) - *vec.begin());
}

void	Span::addRangeNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	std::vector<int>			vec(begin, end);

	if (vec.size() + this->_vec.size() > this->_maxNb)
		throw NotEnoughSizeException();
	this->_vec.insert(this->_vec.end(), begin, end);
}
