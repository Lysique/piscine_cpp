/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 14:12:49 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/06 14:54:24 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Karen {

public:

	Karen(void);
	~Karen(void);

	void	complain(std::string lvl);

private:

	void		debug(void);
	void		info(void);
	void		warning(void);
	void		error(void);

	void		(Karen::*complains[4])(void);
	std::string	lvls[4];
};
