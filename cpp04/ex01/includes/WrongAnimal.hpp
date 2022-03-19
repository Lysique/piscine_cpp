/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 12:44:20 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/16 12:46:54 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongANIMAL_HPP
# define WrongANIMAL_HPP

#include <iostream>

class WrongAnimal {

public:

	WrongAnimal(void);
	WrongAnimal(const WrongAnimal &cpy);
	~WrongAnimal(void);

	WrongAnimal &operator=(const WrongAnimal &cpy);

	const std::string	getType(void) const;
	void				makeSound(void) const;

protected:

	std::string	type;

private:

};

#endif
