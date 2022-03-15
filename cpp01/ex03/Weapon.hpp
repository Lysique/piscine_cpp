/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 12:48:13 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/06 12:46:34 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class	Weapon {
	
	public:

		Weapon(std::string type);
		~Weapon(void);

		const std::string	&getType(void) const;
		void				setType(const std::string &str);

	private:

		std::string	_type;

};

#endif
