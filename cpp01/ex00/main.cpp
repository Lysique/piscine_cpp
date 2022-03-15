/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 10:57:23 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/05 12:31:21 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie zom("Carl");
	Zombie *zomzom;

	randomChump("Bertrand");
	zom.announce();
	zomzom = newZombie("Peter");
	zomzom->announce();
	delete zomzom;
}
