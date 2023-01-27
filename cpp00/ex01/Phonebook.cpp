/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:20:42 by hoslim            #+#    #+#             */
/*   Updated: 2023/01/27 20:32:22 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PhoneBook.hpp"

void	PhoneBook::ADD(unsigned int num)
{
	this->contact[num].idx = num + 1;
	std::cout << "Enter your first name : ";
	std::cin >> this->contact[num].FirstName;
	std::cout << "Enter your last name : ";
	std::cin >> this->contact[num].LastName;
	std::cout << "Enter your nickname : ";
	std::cin >> this->contact[num].nickname;
	std::cout << "Enter your phone number : ";
	std::cin >> this->contact[num].phonenumber;
	std::cout << "Enter your secret : ";
	std::cin >> this->contact[num].secret;
}

void	PhoneBook::SEARCH(void)
{
	int			i = 0;
	int			len = 0;
	std::string	first;
	std::string	last;
	std::string	nick;

	if (this->contact[0].idx != 1)
	{
		std::cout << "Please add at least once" << std::endl;
		return ;
	}
	std::cout << "     Index" << "|" << "First Name" << "|" << " Last Name" << "|" << "  NickName" << std::endl;
	while (i < 8)
	{
		if (this->contact[i].idx != i + 1)
			break ;
		std::cout.width(10);
		std::cout.fill(' ');
		std::cout << this->contact[i].idx << '|';
		std::cout.width(10);
		std::cout.fill(' ');
		if (this->contact[i].FirstName.length() > 10)
		{
			first = this->contact[i].FirstName.substr(0, 9);
			first += '.';
		}
		else
			first = this->contact[i].FirstName;
		std::cout << first << '|';
		std::cout.width(10);
		std::cout.fill(' ');
		if (this->contact[i].LastName.length() > 10)
		{
			last = this->contact[i].LastName.substr(0, 9);
			last += '.';
		}
		else
			last = this->contact[i].LastName;
		std::cout << last << '|';
		std::cout.width(10);
		std::cout.fill(' ');
		if (this->contact[i].nickname.length() > 10)
		{
			nick = this->contact[i].nickname.substr(0, 9);
			nick += '.';
		}
		else
			nick = this->contact[i].nickname;
		std::cout << nick << std::endl;
		i++;
	}
	std::cout << "Enter number : ";
	std::cin >> len;
	if (len < 1 || len > i)
	{
		std::cout << "Enter wrong number" << std::endl;
		return ;
	}
	std::cout << "Selected First Name : " << this->contact[len - 1].FirstName << std::endl;
	std::cout << "Selected Last Name : " << this->contact[len - 1].LastName << std::endl;
	std::cout << "Selected Nick Name : " << this->contact[len - 1].nickname << std::endl;
	return ;
}

void	PhoneBook::EXIT(void)
{
	exit(0);
}

int main(void)
{
	int			i;
	std::string	cmd;
	PhoneBook	book;
	
	i = 0;
	while (1)
	{
		std::cout << "Enter Command : ";
		std::cin >> cmd;
		if (cmd == "EXIT")
			book.EXIT();
		else if (cmd == "ADD")
		{
			if (i == 8)
				i = 0;
			book.ADD(i);
			i++;
		}
		else if (cmd == "SEARCH")
			book.SEARCH();
		else if (cmd.empty())
		{
			std::cout << "Invalid signal" << std::endl;
			break ;
		}
		else
			std::cout << "command : not found" << std::endl;
		cmd.clear();
	}
	return (0);
}
