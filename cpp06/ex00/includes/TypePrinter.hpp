/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypePrinter.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamighi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 08:58:38 by tamighi           #+#    #+#             */
/*   Updated: 2022/03/22 10:41:19 by tamighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPEPRINTER_HPP
# define TYPEPRINTER_HPP

#include <iostream>

class TypePrinter {

public:

	TypePrinter(char *arg);
	TypePrinter(const TypePrinter &cpy);
	~TypePrinter(void);

	TypePrinter &operator=(const TypePrinter &cpy);

	void	printType(void);

private:

	std::string			_arg;
	std::string			_type;

	bool	_printSpStr(void);
	void	_printChar(void);
	void	_printInt(void);
	void	_printFloat(void);
	void	_printDouble(void);

	void	_checkType(void);

	static std::string	_spDoubles[3];
	static std::string	_spFloats[3];

	class InvalidType : public std::exception {
	public:
		virtual const char	*what() const throw() {
			return ("Type is neither a char, an int, a float or a double.");
		}
	};
	
	class EmptyString : public std::exception {
	public:
		virtual const char	*what() const throw() {
			return ("String is empty.");
		}
	};
};

#endif
