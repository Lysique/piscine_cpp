/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 08:47:00 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/19 09:16:22 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"

class IMateriaSource {

public:
	virtual ~IMateriaSource() {}

	virtual void		learnMateria(AMateria *m) = 0;
	virtual AMateria	*createMateria(const std::string &type) = 0;
};

#endif
