/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 20:16:24 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/22 17:52:56 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int ac ,char **av)
{
    size_t          idx;

    if (ac != 4 || av[1] == NULL || av[2] == NULL || av[3] == NULL)
        return (1);
    std::ifstream   file(av[1]);
    if (file.is_open())
    {
        std::string     dest(av[2]);
        std::string     file_name(av[1]);
        std::ofstream   outfile(file_name + ".replace");
        std::string     line;
        
        while (getline(file, line))
        {
            idx = line.find(dest);
            if (idx != std::string::npos)
            {
                line.erase(idx, dest.length());
                line.insert(idx, av[3]);
            }
            outfile << line << std::endl;
        }
    }
    else
        return (1);
    return (0);
}
