/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:57:18 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/17 17:35:41 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {

public:

	Character(std::string name);
	Character(const Character &cpy);
	~Character();
	
	Character	&operator=(const Character &cpy);

	virtual const std::string  &getName() const;
	virtual void				equip(AMateria *m);
	virtual void				unequip(int idx);
	virtual void 				use(int idx, ICharacter &target);

private:

	std::string	_name;
	AMateria	*_metas[4];
};

#endif
