/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 15:42:28 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/14 15:34:22 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

public:

	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &cpy);
	~ClapTrap(void);

	ClapTrap &operator=(const ClapTrap &cpy);

	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

protected:

	ClapTrap(void);

	std::string	_name;
	int			_hp;
	int			_ep;
	int			_ad;
	int			_maxHp;
};

#endif
