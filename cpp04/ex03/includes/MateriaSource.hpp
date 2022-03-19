/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 08:48:36 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/19 09:17:17 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

public:

	MateriaSource(void);
	MateriaSource(const MateriaSource &cpy);
	~MateriaSource(void);

	MateriaSource &operator=(const MateriaSource &cpy);

	virtual void		learnMateria(AMateria *m);
	virtual AMateria	*createMateria(const std::string &type);

private:

	AMateria	*_metas[4];

};

#endif
