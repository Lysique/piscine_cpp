/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 10:46:25 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/05 14:56:17 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	public:

		Zombie(std::string name);
		~Zombie(void);

		void	announce(void) const;

	private:

		std::string	const	_name;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
