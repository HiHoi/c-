/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 16:02:25 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/18 19:51:25 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string _target) : Form("President", 25, 5)
{
    this->target = _target;
    this->setSign(false);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& s) : Form(s.getName(), s.getGradeToSign(), s.getGradeToExec())
{
    this->target = s.target;
    this->setSign(s.getSign());
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& s)
{
    if (this != &s)
    {
        this->setSign(s.getSign());
        this->target = s.getTarget();
    }
    return (*this);
}

std::string PresidentialPardonForm::getTarget(void) const
{
    return (this->target);
}

void    PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
    try
    {
        if (this->getSign() == false)
            throw (Form::UnsignedException());
        if (executor.getGrade() > this->getGradeToExec())
            throw (Form::GradeTooLowException());
        std::cout << "* " << this->getTarget();
        std::cout << " has been pardoned by Zaphod Beeblebrox *" << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}