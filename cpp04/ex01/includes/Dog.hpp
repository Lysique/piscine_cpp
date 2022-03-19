/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:29:54 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/16 16:24:22 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

public:

	Dog(void);
	Dog(const Dog &cpy);
	~Dog(void);

	Dog				&operator=(const Dog &cpy);
	virtual	Animal	&operator=(const Animal &cpy);

	virtual void		makeSound(void) const;
	virtual Brain		*getBrain(void) const;

protected:

private:

	Brain	*_brain;

};

#endif
