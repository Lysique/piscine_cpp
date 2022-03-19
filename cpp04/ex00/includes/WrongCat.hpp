/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 12:47:33 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/16 13:36:18 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCAT_HPP
# define WrongCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:

	WrongCat(void);
	WrongCat(const WrongCat &cpy);
	~WrongCat(void);

	WrongCat &operator=(const WrongCat &cpy);

	void				makeSound(void) const;

protected:

private:

};

#endif
