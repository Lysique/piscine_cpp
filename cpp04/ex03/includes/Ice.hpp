/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:15:39 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/17 17:30:09 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {

public:

	Ice(void);
	Ice(const Ice &cpy);
	~Ice(void);

	Ice &operator=(const Ice &cpy);

	virtual void		use(ICharacter &target);
	virtual AMateria	*clone(void);

protected:

	std::string	_type;

private:

};

#endif
