/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:34:16 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/22 14:51:59 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template<typename T>
void	swap(T &a, T &b)
{
	T	c;

	c = a;
	a = b;
	b = c;
}

template<typename T>
const T	&max(const T &a, const T &b)
{
	if (a >= b)
		return (a);
	else
		return (b);
}

template<typename T>
const T	&min(const T &a, const T &b)
{
	if (a <= b)
		return (a);
	else
		return (b);
}


#endif
