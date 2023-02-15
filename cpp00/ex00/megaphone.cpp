/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 20:29:27 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/15 12:35:18 by hoslim           ###   ########.fr       */
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
        {
            if (av[i][j] >= 'a' && av[i][j] <= 'z')
                av[i][j]-= 32;
        }
        std::cout << av[i];
    }
    std::cout << std::endl;
    return (0);
}
