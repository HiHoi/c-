/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:30:27 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/20 16:18:53 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _INTERN_HPP_
#define _INTERN_HPP_

#include <iostream>
#include <exception>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
private:
public:
    Intern(void);
    ~Intern(void);
    Intern(const Intern& i);
    Intern& operator=(const Intern& i);
    
    Form*   makeForm(std::string name, std::string target);

    class   Exception : public std::exception
    {
        virtual const char* what() const throw();
    };
    class   TypeException : public Intern::Exception
    {
        const char* what() const throw();
    };
};



#endif