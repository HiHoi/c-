/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:20:42 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/22 14:37:55 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void	PhoneBook::printSearch(int idx) const
{
	std::cout.width(10);
	std::cout.fill(' ');
	std::cout << idx << '|';
}

void	PhoneBook::printSearch(std::string str)
{
	std::string	buffer;
	
	std::cout.width(10);
	std::cout.fill(' ');
	if (str.length() > 10)
	{
		buffer = str.substr(0, 9);
		buffer += '.';
	}
	else
		buffer = str;
	std::cout << buffer << '|';
}

void	PhoneBook::ADD(unsigned int num)
{
	std::string	buffer0;
	std::string	buffer1;
	std::string	buffer2;
	std::string	buffer3;
	std::string	buffer4;
	
	this->contact[num].setIndex(num + 1);
	std::cout << "Enter your first name : ";
	std::cin >> buffer0;
	this->contact[num].setFirstName(buffer0);
	std::cout << "Enter your last name : ";
	std::cin >> buffer1;
	this->contact[num].setLastName(buffer1);
	std::cout << "Enter your nickname : ";
	std::cin >> buffer2;
	this->contact[num].setNickname(buffer2);
	std::cout << "Enter your phone number : ";
	std::cin >> buffer3;
	this->contact[num].setPhoneNumber(buffer3);
	std::cout << "Enter your secret : ";
	std::cin >> buffer4;
	this->contact[num].setSecret(buffer4);
	std::cin.ignore();
}

void	PhoneBook::SEARCH(void)
{
	int			i = 0;
	int			len = 0;

	if (this->contact[0].getIndex() != 1)
	{
		std::cout << "Please add at least once" << std::endl;
		return ;
	}
	std::cout << "     Index" << "|" << "First Name" << "|" << " Last Name" << "|" << "  NickName|" << std::endl;
	while (i < 8)
	{
		if (this->contact[i].getIndex() != i + 1)
			break ;
		printSearch(this->contact[i].getIndex());
		printSearch(this->contact[i].getFirstName());
		printSearch(this->contact[i].getLastName());
		printSearch(this->contact[i].getNickname());
		std::cout << std::endl;
		i++;
	}
	std::cout << "Enter number : ";
	std::cin >> len;
	if (len > 0 && len <= i)
	{
		std::cout << "Selected First Name : " << this->contact[len - 1].getFirstName() << std::endl;
		std::cout << "Selected Last Name : " << this->contact[len - 1].getLastName() << std::endl;
		std::cout << "Selected Nick Name : " << this->contact[len - 1].getNickname() << std::endl;
		std::cout << "Selected Phone number : " << this->contact[len - 1].getPhoneNumber() << std::endl;
		std::cout << "Selected secret : " << this->contact[len - 1].getSecret() << std::endl;
		std::cin.ignore();
	}
	else if (std::cin.fail() == 1 || !(len > 0 && len <= i))
	{
		std::cin.clear();
		std::cin.ignore(100, '\n');
		std::cout << "Invaild Arg" << std::endl;
	}
	return ;
}

void	PhoneBook::EXIT(void)
{
	exit(0);
}
