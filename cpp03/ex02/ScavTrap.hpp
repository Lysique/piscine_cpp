/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 09:57:55 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/14 15:32:53 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

public:

	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &cpy);
	~ScavTrap(void);

	ScavTrap &operator=(const ScavTrap &cpy);

	void	attack(const std::string &target);

	void	guardGate();

protected:

	ScavTrap(void);
};

#endif
