/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:24:18 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/17 13:37:54 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string _name) : name(_name)
{
    this->grade = 75;
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat::Bureaucrat(const Bureaucrat& _br) : name(_br.name)
{
    this->grade = _br.getGrade();
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& _br)
{
    if (this != &_br)
    {
        this->grade = _br.getGrade();
    }
    return (*this);
}

std::string    Bureaucrat::getName(void) const
{
    return (this->name);
}

int Bureaucrat::getGrade(void) const
{
    return (this->grade);
}

void    Bureaucrat::setGrade(int _grade)
{
    this->grade = _grade;
}

void    Bureaucrat::increment(void)
{
    try
    {
        int yourGrade = this->getGrade();

        if (yourGrade - 1 < 1)
            throw (GradeTooHighException());
        this->grade = yourGrade - 1;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void    Bureaucrat::decrement(void)
{
    try
    {
        int yourGrade = this->getGrade();

        if (yourGrade + 1 > 150)
            throw(GradeTooLowException());
        this->grade = yourGrade + 1;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

const char* Bureaucrat::Exception::what(void) const throw()
{
    return ("Exception from bureaucrat");
}

const char* Bureaucrat::GradeTooHighException::what(void) const throw()
{
    return ("Your grade is already Top!");
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw()
{
    return ("Wow... Already underground...");
}

std::ostream&   operator<<(std::ostream& out, const Bureaucrat& _br)
{
    out << _br.getName() << " , bureaucrat grade " << _br.getGrade();
    return (out);
}
