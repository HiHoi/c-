/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:39:29 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/17 18:39:41 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FORM_HPP_
#define _FORM_HPP_

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class   Form
{
    private:
        const std::string   name;
        bool    sign;
        const int   gradeToSign;
        const int   gradeToExec;
    protected:
    public:
        Form(const std::string _name, const int _sign, const int _exec);
        ~Form(void);
        Form(const Form &f);
        Form&   operator=(const Form &f);

        std::string   getName(void);
        bool    getSign(void);
        int    getGradeToSign(void) const;
        int    getGradeToExec(void) const;

        void    beSigned(const Bureaucrat& b);
        void    signForm(const Bureaucrat& b);

        class   Exception : public  std::exception
        {
            public:
                virtual const char* what(void) const throw();
        };

        class   GradeTooHighException : public  Exception
        {
            public:
                const char* what(void) const throw();
        };

        class   GradeTooLowException : public   Exception
        {
            public:
                const char* what(void) const throw();
        };
};

std::ostream&   operator<<(std::ostream& out, Form& f);
 
#endif