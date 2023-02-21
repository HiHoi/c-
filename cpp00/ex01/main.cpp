/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:16:54 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/21 20:28:09 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <istream>

int main(void)
{
	int			i;
	std::string	cmd;
	PhoneBook	book;
	
	i = 0;
	while (1)
	{
		std::cout << "Enter Command : ";
		std::getline(std::cin, cmd);
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
		else if (std::cin.eof())
		{
			std::cout << std::endl;
			std::cout << "signal: invalid signal" << std::endl;
			break ;
		}
		else
		{
			std::cout << "command : not found" << std::endl;
			cmd.clear();
		}
		cmd.clear();
	}
	return (0);
}
