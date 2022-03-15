/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:14:33 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/14 15:37:06 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

public:

	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &cpy);
	~DiamondTrap(void);

	DiamondTrap &operator=(const DiamondTrap &cpy);

	void	attack(const std::string &target);

	void	whoAmI(void);

private:

	DiamondTrap(void);

	std::string	_name;
};

#endif
