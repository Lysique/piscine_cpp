/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:10:07 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/16 16:50:00 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include "../includes/Brain.hpp"

class AAnimal {

public:

	virtual	~AAnimal(void);

	virtual	AAnimal &operator=(const AAnimal &cpy) = 0;

	const std::string	getType(void) const;
	virtual void		makeSound(void) const = 0;
	virtual Brain		*getBrain( void ) const = 0;

protected:

	 std::string	type;

private:

};

#endif
