/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:20:55 by hoslim            #+#    #+#             */
/*   Updated: 2023/01/27 20:13:48 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PHONEBOOK_HPP_
#define _PHONEBOOK_HPP_

#include <iostream>
#include <string>

class Contact
{
	private :
	public :
		int             idx;
		std::string     FirstName;
		std::string     LastName;
		std::string     nickname;
		std::string     secret;
		std::string     phonenumber;
};

class PhoneBook
{
	private :
		Contact	contact[8];
	public :
		void	ADD(unsigned int);
		void	SEARCH(void);
		void	EXIT(void);
};


#endif