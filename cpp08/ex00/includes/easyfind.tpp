#ifndef EASYFIND_TPP
# define EASYFIND_TPP

#include <iostream>
#include <list>
#include <algorithm>

class NotFoundException : public std::exception {
	virtual const char* what() const throw() { 
		return ("Not found."); 
	}
};

template<typename T>
typename T::iterator	easyfind(T arr, int n)
{
	typename T::iterator	res;

	res = std::find(arr.begin(), arr.end(), n);
	if (res == arr.end())
		throw NotFoundException();
	return (res);
}

#endif
