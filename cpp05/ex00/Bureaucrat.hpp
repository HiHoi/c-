/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:11:37 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/15 17:30:49 by hoslim           ###   ########.fr       */
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
        Bureaucrat(void);
        ~Bureaucrat(void);
        Bureaucrat(const Bureaucrat& _br);
        Bureaucrat& operator=(const Bureaucrat& _br);

        class   Exception
        {
            public:
                virtual const char* what(void) const throw(void);
            
                Exception   GradeTooHighException(void) throw(void);
                Exception   GradeTooLowException(void)  throw(void);
        }

        std::string    getName(void);
        int    getGrade(void);
}

#endif