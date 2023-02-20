/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:58:31 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/18 15:49:00 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target) : Form("Shrubbery", 145, 137)
{
    this->target = _target;
    this->setSign(false);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& s) : Form(s.getName(), s.getGradeToSign(), s.getGradeToExec())
{
    this->target = s.target;
    this->setSign(s.getSign());
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& s)
{
    if (this != &s)
    {
        this->setSign(s.getSign());
        this->target = s.getTarget();
    }
    return (*this);
}

std::string ShrubberyCreationForm::getTarget(void) const
{
    return (this->target);
}

void    ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
    try
    {
        if (this->getSign() == false)
            throw (UnsignedException());
        std::ofstream    File(executor.getName() + "_shrubbery");
        
        File << "        (    | )       \n";
        File << "       (  |  o  )      \n";
        File << "        ( o    )       \n";
        File << "         |    |        \n";
        File << "         |    |        \n";
        File << "         |    |        \n";
        File << "         |    |        \n";
        File << "_________|    |________\n";
        File << "                       \n";
        File.close();
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}
