/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 16:38:49 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/05 19:09:56 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) 
{
    Point   a(4.0, 4.0);
    Point   b(1.0, 2.0);
    Point   c(3.0, 1.0);
    Point   point1(3.5, 3.5);
    Point   point2(-3.5, 6.5);
    Point   point3(3.5, -6.5);

    std::cout << bsp(a, b, c, point1) << std::endl;
    std::cout << bsp(a, b, c, point2) << std::endl;
    std::cout << bsp(a, b, c, point3) << std::endl;
}
