/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:10:07 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/16 16:56:57 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include "../includes/Brain.hpp"

class Animal {

public:

	Animal(void);
	Animal(const Animal &cpy);
	virtual	~Animal(void);

	virtual	Animal &operator=(const Animal &cpy);

	const std::string	getType(void) const;
	virtual void		makeSound(void) const;
	virtual Brain		*getBrain( void ) const;

protected:

	 std::string	type;

private:

};

#endif
