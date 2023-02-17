/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:11:37 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/17 14:50:52 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BUREAUCRAT_HPP_
#define _BUREAUCRAT_HPP_

#include <iostream>
#include <exception>

class   Bureaucrat
{
    private:
        const std::string   name;
        int                 grade;
    protected:
    public:
        Bureaucrat(const std::string _name);
        ~Bureaucrat(void);
        Bureaucrat(const Bureaucrat& _br);
        Bureaucrat& operator=(const Bureaucrat& _br);

        std::string    getName(void) const;
        int    getGrade(void) const;
        void    setGrade(int _grade);

        void    increment(void);
        void    decrement(void);

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

std::ostream&   operator<<(std::ostream& out, const Bureaucrat& _br);

#endif