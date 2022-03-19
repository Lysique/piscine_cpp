/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:29:54 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/16 16:38:52 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {

public:

	Dog(void);
	Dog(const Dog &cpy);
	~Dog(void);

	Dog				&operator=(const Dog &cpy);
	virtual	AAnimal	&operator=(const AAnimal &cpy);

	virtual void		makeSound(void) const;
	virtual Brain		*getBrain(void) const;

protected:

private:

	Brain	*_brain;

};

#endif
