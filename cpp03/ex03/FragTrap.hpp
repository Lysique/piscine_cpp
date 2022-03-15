/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 12:39:16 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/14 15:32:05 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

public:

	FragTrap(std::string name);
	FragTrap(const FragTrap &cpy);
	~FragTrap(void);

	FragTrap &operator=(const FragTrap &cpy);

	void	highFivesGuys(void);

protected:

	FragTrap(void);
};

#endif
