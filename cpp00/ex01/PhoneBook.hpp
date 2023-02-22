/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:20:55 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/22 20:06:25 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PHONEBOOK_HPP_
#define _PHONEBOOK_HPP_

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
	private :
		Contact	contact[8];
	public :
		void	ADD(unsigned int);
		void	SEARCH(void);
		void	EXIT(void);

		void	printSearch(std::string str);
		void	printSearch(int idx) const;
};

#endif