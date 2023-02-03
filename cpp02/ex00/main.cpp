/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 16:38:49 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/03 17:36:52 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
    Fixed   a;
    Fixed   b(a);
    Fixed   c;

    c = b;
        
    std::cout << a.getRawBits() << std::endl; 
    std::cout << b.getRawBits() << std::endl; 
    std::cout << c.getRawBits() << std::endl;
    
    return (0);
}
