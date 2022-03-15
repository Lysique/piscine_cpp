/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:41:39 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/05 16:01:56 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

# define FIRST_NAME 0
# define LAST_NAME 1
# define NICKNAME 2
# define PHONE_NUMBER 3
# define DARKEST_SECRET 4

class Contact
{
	public:

		Contact(void);
		~Contact(void);

		void		setContactInfo(int info, std::string input);
		std::string	getContactInfo(int info) const;

	private:

		std::string _contactInfos[5];
};

#endif
