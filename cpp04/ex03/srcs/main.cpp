/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:05:27 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/19 09:23:11 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"
#include "../includes/Ice.hpp"
#include "../includes/Cure.hpp"

#include "../includes/Character.hpp"
#include "../includes/MateriaSource.hpp"

int	main(void)
{
	AMateria	*m;
	AMateria	*m2;
	Character	jp("Jean Pierre");
	Character	pa("Patrick");

	m = new Ice;
	m2 = new Cure;
	m->use(jp);
	m2->use(jp);
	std::cout << std::endl;

	jp.equip(m);
	jp.use(0, pa);
	jp.equip(m2);
	jp.use(1, pa);
	jp.unequip(1);
	jp.use(1, pa);
	std::cout << std::endl;

	pa = jp;
	pa.use(0, jp);
	pa.equip(m2);
	pa.use(1, jp);
	std::cout << std::endl;

	MateriaSource	ms;
	AMateria		*Newm;

	ms.learnMateria(m->clone());
	Newm = ms.createMateria("ice");
	Newm->use(jp);
	delete Newm;
}
