/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:01:50 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/20 16:21:21 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
    Intern  newGuy;
    Form*   f = newGuy.makeForm("robotomy request", "hoslim");
    Bureaucrat  a("hoslim");


    //success
    a.setGrade(1);
    f->beSigned(a);
    f->execute(a);
}