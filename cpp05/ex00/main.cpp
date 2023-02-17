/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:01:50 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/17 13:38:31 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat  a("hoslim");

    //success
    a.increment();
    std::cout << a << std::endl;
    a.decrement();
    std::cout << a << std::endl;

    //error
    a.setGrade(1);
    a.increment();
    std::cout << a << std::endl;
    a.setGrade(150);
    a.decrement();
    std::cout << a << std::endl;
}