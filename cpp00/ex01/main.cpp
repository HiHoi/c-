/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:16:54 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/22 17:31:42 by hoslim           ###   ########.fr       */
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
		if (cmd.compare("EXIT") == 0)
			book.EXIT();
		else if (cmd.compare("ADD") == 0)
		{
			if (i == 8)
				i = 0;
			book.ADD(i);
			i++;
		}
		else if (cmd.compare("SEARCH") == 0)
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
