/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:58:29 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/18 19:28:18 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ROBOTOMY_REQUEST_HPP_
#define _ROBOTOMY_REQUEST_HPP_

#include <iostream>
#include <cstdlib>
#include <string>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class   RobotomyRequestForm : public Form
{
    private:
        std::string target;
    public:
        RobotomyRequestForm(std::string _target);
        ~RobotomyRequestForm(void);
        RobotomyRequestForm(const RobotomyRequestForm& s);
        RobotomyRequestForm& operator=(const RobotomyRequestForm& s);

        std::string getTarget(void) const;

        void    execute(Bureaucrat const& executor) const;
};

#endif