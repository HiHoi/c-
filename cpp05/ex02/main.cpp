/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:01:50 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/17 18:51:40 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    Bureaucrat  a("hoslim");
    Form        f("KWU", 70, 60);

    //success
    a.setGrade(55);
    f.beSigned(a);
    f.signForm(a);

    //error
    a.setGrade(1);
    f.beSigned(a);
    f.signForm(a);
    a.setGrade(150);
    f.beSigned(a);
    f.signForm(a);
}