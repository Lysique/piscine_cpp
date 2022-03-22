/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:09:54 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/22 15:47:36 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template<typename T>
class Array {

public:

	Array<T>(void) : _size(0), _array(0) { }

	Array<T>(unsigned int n) : _size(n)
	{
	   	this->_array = new T[n];
	}

	Array<T>(const Array &cpy)
	{
		*this = cpy;
	}

	~Array<T>(void)
	{
		if (this->_array)
			delete [] this->_array;
	}

	Array<T>	&operator=(const Array &cpy)
	{
		if (this->_array)
			delete [] this->_array;
		this->_array = new T[cpy.size()];
		this->_size = cpy.size();
		for (int i = 0; i < this->size(); i++)
			this->_array[i] = cpy[i];
		return (*this);
	}

	T	&operator[](int i) const
	{
		if (i < 0 || i >= this->size())
			throw std::overflow_error("Index out of bounds");
		return (this->_array[i]);
	}

	int	size(void) const
	{
		return (this->_size);
	}

private:

	unsigned int	_size;
	T				*_array;

};

#endif
