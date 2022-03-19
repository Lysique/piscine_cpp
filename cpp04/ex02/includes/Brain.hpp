/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:43:27 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/16 13:44:17 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {

public:

	Brain(void);
	Brain(const Brain &cpy);
	~Brain(void);

	Brain &operator=(const Brain &cpy);

	std::string	ideas[100];

private:

};

#endif
