/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 16:23:58 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/05 15:16:29 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"

class Phonebook
{
	public:

		Phonebook(void);
		~Phonebook(void);

		void	add(void);
		void	search(void) const;

	private:

		int		_count;
		Contact	_contacts[8];
};

#endif
