/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 10:46:25 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/06 11:10:44 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	public:

		Zombie(void);
		~Zombie(void);

		void	announce(void) const;
		void	setName(std::string name);

	private:

		std::string	_name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif
