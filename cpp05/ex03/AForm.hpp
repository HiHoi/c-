/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:39:29 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/18 12:39:37 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _AFORM_HPP_
#define _AFORM_HPP_

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

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
        virtual ~Form(void);
        Form(const Form &f);
        Form&   operator=(const Form &f);

        std::string   getName(void) const;
        bool    getSign(void) const;
        int    getGradeToSign(void) const;
        int    getGradeToExec(void) const;

        void    setSign(bool _sign);

        void    beSigned(const Bureaucrat& b);
        void    signForm(const Bureaucrat& b);

        virtual void    execute(Bureaucrat const& executor) const = 0;

        class   Exception : public  std::exception
        {
            public:
                virtual const char* what(void) const throw();
        };

        class   GradeTooHighException : public  Form::Exception
        {
            public:
                virtual const char* what(void) const throw();
        };

        class   GradeTooLowException : public   Form::Exception
        {
            public:
                virtual const char* what(void) const throw();
        };
        class   UnsignedException : public Form::Exception
        {
            public:
                virtual const char* what(void) const throw();
        };
};

std::ostream&   operator<<(std::ostream& out, Form const& f);
 
#endif