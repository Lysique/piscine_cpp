/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:29:54 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/16 12:29:57 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {

public:

	Dog(void);
	Dog(const Dog &cpy);
	~Dog(void);

	Dog &operator=(const Dog &cpy);

	virtual void		makeSound(void) const;

protected:

private:

};

#endif
