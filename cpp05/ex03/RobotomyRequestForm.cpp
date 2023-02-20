/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:58:43 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/18 19:40:41 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string _target) : Form("Robotomy", 72, 45)
{
    this->target = _target;
    this->setSign(false);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& s) : Form(s.getName(), s.getGradeToSign(), s.getGradeToExec())
{
    this->target = s.target;
    this->setSign(s.getSign());
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& s)
{
    if (this != &s)
    {
        this->setSign(s.getSign());
        this->target = s.getTarget();
    }
    return (*this);
}

std::string RobotomyRequestForm::getTarget(void) const
{
    return (this->target);
}

void    RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
    try
    {
        if (this->getSign() == false)
            throw (Form::UnsignedException());
        if (executor.getGrade() > this->getGradeToExec())
            throw (Form::GradeTooLowException());
        std::cout << "* make some drilling noises *" << std::endl;
        if (std::rand() % 2 == 1)
            std::cout << this->getTarget() << " has been robotomized!" << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}