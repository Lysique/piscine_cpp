/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:36:58 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/17 17:33:13 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {

public:

	Cure(void);
	Cure(const Cure &cpy);
	~Cure(void);

	Cure &operator=(const Cure &cpy);

	virtual void		use(ICharacter &target);
	virtual AMateria	*clone(void);

protected:

	std::string	_type;

private:

};

#endif
