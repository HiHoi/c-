/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:07:52 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/22 20:06:26 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CONTACT_HPP_
#define _CONTACT_HPP_

#include <iostream>
#include <string>

class Contact
{
	private :
		int             idx;
		std::string     FirstName;
		std::string     LastName;
		std::string     nickname;
		std::string     secret;
		std::string     phoneNumber;
	public :
		//getter
		int	getIndex(void);
		std::string	getFirstName(void);
		std::string	getLastName(void);
		std::string	getNickname(void);
		std::string	getSecret(void);
		std::string	getPhoneNumber(void);
		//setter
		void	setIndex(const int index);
		void	setFirstName(const std::string);
		void	setLastName(const std::string);
		void	setNickname(const std::string);
		void	setSecret(const std::string);
		void	setPhoneNumber(const std::string);
};

#endif