/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:19:23 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/22 12:31:09 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/struct.hpp"

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main(void)
{
	Data		*data;
	uintptr_t	raw;

	data = new Data;
	data->x = 42;
	std::cout << "Data adress : " << data << ", Data value : "<< data->x << std::endl;
	raw = serialize(data);
	data = deserialize(raw);
	std::cout << "Data adress after reinterpret : " << data << ", Data value : " << data->x <<", Data value : " << data->x << std::endl;
	delete data;
}
