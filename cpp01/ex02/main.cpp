/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 20:00:49 by hoslim            #+#    #+#             */
/*   Updated: 2023/01/30 20:19:36 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string hi = "HI THIS IS BRAIN";
    std::string *hiPTR = &hi;
    std::string &hiREF = hi;

    std::cout << "Where are you living? : " << &hi << std::endl;
    std::cout << "Where are you living? : " << hiPTR << std::endl;
    std::cout << "Where are you living? : " << &hiREF << std::endl;
    
    std::cout << "Say again : " << hi << std::endl;
    std::cout << "Say again : " << *hiPTR << std::endl;
    std::cout << "Say again : " << hiREF << std::endl;
}
