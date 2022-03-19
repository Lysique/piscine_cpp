/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:30:38 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/16 12:30:33 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {

public:

	Cat(void);
	Cat(const Cat &cpy);
	~Cat(void);

	Cat &operator=(const Cat &cpy);

	virtual void		makeSound(void) const;

protected:

private:

};

#endif
