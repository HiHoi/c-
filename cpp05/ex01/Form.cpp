/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:39:27 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/17 18:51:32 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "Form.hpp"

Form::Form(const std::string _name, const int _sign, const int _exec) : name(_name), gradeToSign(_sign), gradeToExec(_exec)
{
    this->sign = false;
}

Form::~Form(void)
{ 
}

Form::Form(const Form& f) : name(f.name), gradeToSign(f.gradeToSign), gradeToExec(f.gradeToExec)
{
    this->sign = f.sign;
}

Form&   Form::operator=(const Form &f)
{
    if (this != &f)
        this->sign = f.sign;
    return (*this);
}

std::string   Form::getName(void)
{
    return (this->name);
}

bool    Form::getSign(void)
{
    return (this->sign);
}

int   Form::getGradeToSign(void) const
{
    return (this->gradeToSign);
}

int   Form::getGradeToExec(void) const
{
    return (this->gradeToExec);
}

void    Form::beSigned(const Bureaucrat& b)
{
    try
    {
        if (this->getGradeToSign() < b.getGrade())
            throw (GradeTooLowException());
        this->sign = true;
    }
    catch (std::exception &e)
    {
        this->sign = false;
        std::cout << e.what() << std::endl;
    }
}

void    Form::signForm(const Bureaucrat& b)
{
    try
    {
        if (this->getSign() == false)
            throw (GradeTooLowException());
        std::cout << b.getName() << " is signed ";
        std::cout << this->getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << b.getName() << " couldn't sign ";
        std::cout << this->getName() << " because ";
        std::cout << e.what() << std::endl;
    }
}

std::ostream&   operator<<(std::ostream& out, Form& f)
{
    out << "This is " << f.getName() << ". You need ";
    out << f.getGradeToSign() << " to be signed and ";
    out << f.getGradeToExec() << " to be execed" << std::endl;
    return (out);
}

const char* Form::Exception::what(void) const throw()
{
    return ("It's Exception");
}

const char* Form::GradeTooHighException::what(void) const throw()
{
    return ("It's too high");
}

const char* Form::GradeTooLowException::what(void) const throw()
{
    return ("It's too low");
}
