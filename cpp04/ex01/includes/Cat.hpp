/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:30:38 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/16 16:23:53 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

public:

	Cat(void);
	Cat(const Cat &cpy);
	~Cat(void);

	Cat				&operator=(const Cat &cpy);
	virtual	Animal	&operator=(const Animal &cpy);

	virtual void		makeSound(void) const;
	virtual Brain		*getBrain(void) const;

protected:

private:

	Brain	*_brain;

};

#endif
