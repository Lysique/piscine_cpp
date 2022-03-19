/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:08:13 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/17 17:40:59 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {

public:

	AMateria(const std::string	&type);
	AMateria(const AMateria &cpy);
	virtual ~AMateria(void);

	AMateria &operator=(const AMateria &cpy);

	const std::string	&getType()	const;

	virtual void		use(ICharacter &target) = 0;
	virtual AMateria	*clone(void) = 0;

protected:

	std::string	_type;

private:

};

#endif
