/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:30:38 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/16 16:38:52 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {

public:

	Cat(void);
	Cat(const Cat &cpy);
	~Cat(void);

	Cat				&operator=(const Cat &cpy);
	virtual	AAnimal	&operator=(const AAnimal &cpy);

	virtual void		makeSound(void) const;
	virtual Brain		*getBrain(void) const;

protected:

private:

	Brain	*_brain;

};

#endif
