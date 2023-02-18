/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:01:50 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/18 19:58:08 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    Bureaucrat  a("hoslim");
    ShrubberyCreationForm   s("hoslim");
    RobotomyRequestForm     r("hoslim");
    PresidentialPardonForm  p("hoslim");


    //success
    a.setGrade(1);
    s.beSigned(a);
    s.signForm(a);
    s.execute(a);
    a.executeForm(s);

    r.beSigned(a);
    r.signForm(a);
    r.execute(a);
    a.executeForm(s);

    p.beSigned(a);
    p.signForm(a);
    p.execute(a);
    a.executeForm(s);

    //error
    a.setGrade(150);
    s.beSigned(a);
    s.signForm(a);
}