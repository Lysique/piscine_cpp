/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 12:29:45 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/06 12:51:33 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB {

	public:
		
		HumanB(std::string	name);
		~HumanB(void);

		void	attack(void) const;
		void	setWeapon(Weapon &wep);

	private:

		std::string	_name;
		Weapon		*_wep;
};

#endif
