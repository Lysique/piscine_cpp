/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 12:55:47 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/06 12:22:19 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class	HumanA {

	public:
		
		HumanA(std::string	name, Weapon &wep);
		~HumanA(void);

		void	attack(void) const;

	private:

		Weapon		&_wep;
		std::string	_name;
};

#endif
