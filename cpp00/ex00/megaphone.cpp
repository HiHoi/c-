/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 20:29:27 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/21 20:22:47 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i = 0;
    int j;

    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBERABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    while (++i < ac)
    {
        j = -1;
        while (av[i][++j])
            std::cout << static_cast<char> (std::toupper(av[i][j]));
    }
    std::cout << std::endl;
    return (0);
}
