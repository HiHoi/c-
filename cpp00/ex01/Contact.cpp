/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:07:42 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/21 12:21:04 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int Contact::getIndex(void)
{
    return (this->idx);
}

std::string Contact::getFirstName(void)
{
    return (this->FirstName);
}

std::string Contact::getLastName(void)
{
    return (this->LastName);
}

std::string Contact::getNickname(void)
{
    return (this->nickname);
}

std::string Contact::getSecret(void)
{
    return (this->secret);
}

std::string Contact::getPhoneNumber(void)
{
    return (this->phoneNumber);
}

void    Contact::setIndex(int _idx)
{
    this->idx = _idx;
}

void    Contact::setFirstName(std::string _firstName)
{
    this->FirstName = _firstName;
}

void    Contact::setLastName(std::string _lastName)
{
    this->LastName = _lastName;
}

void    Contact::setNickname(std::string _nickname)
{
    this->nickname = _nickname;
}

void    Contact::setSecret(std::string _secret)
{
    this->secret = _secret;
}

void    Contact::setPhoneNumber(std::string _phone)
{
    this->phoneNumber = _phone;
}
