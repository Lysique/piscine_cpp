/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 10:25:07 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/26 11:17:01 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span {

public:

	Span(unsigned int N);
	Span(const Span &cpy);
	~Span(void);

	Span &operator=(const Span &cpy);

	void	addNumber(int num);
	int		shortestSpan(void);
	int		longestSpan(void);
	void	addRangeNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);

private:


	std::vector<int>	_vec;
	unsigned int		_maxNb;

public:

	class NotEnoughSizeException : public std::exception
	{
		virtual const char	*what() const throw()
		{
			return ("Max storage size reached");
		}
	};

	class NotEnoughNumbersException : public std::exception
	{
		virtual const char	*what() const throw()
		{
			return ("Not enough numbers in vector to return span");
		}
	};

};

#endif
