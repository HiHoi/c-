/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:30:55 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/22 19:55:17 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void    Harl::debug(void)
{
    std::cout << "[Debug]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
    std::cout << std::endl;
}

void    Harl::info(void)
{
    std::cout << "[Info]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
    std::cout << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "[Warning]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
    std::cout << std::endl;
}

void    Harl::error(void)
{
    std::cout << "[Error]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    std::cout << std::endl;
}

void    Harl::complain(std::string level)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int         i;
    
    for (i = 0; i < 4; i++)
    {
        if (level == levels[i])
            break ;
    }
    switch (i)
    {
        case 0:
        {
            this->debug();
        }
        case 1:
        {
            this->info();
        }
        case 2:
        {
            this->warning();
        }
        case 3:
        {
            this->error();
            break;
        }
        
        default:
        {
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
        }
    }
}
