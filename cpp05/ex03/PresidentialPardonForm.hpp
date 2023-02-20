/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 16:02:34 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/18 16:03:04 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PRESIDIENTIALPARDONFORM_HPP_
#define _PRESIDIENTIALPARDONFORM_HPP_

#include <iostream>
#include <fstream>
#include <string>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class   PresidentialPardonForm : public Form
{
    private:
        std::string target;
    public:
        PresidentialPardonForm(std::string _target);
        ~PresidentialPardonForm(void);
        PresidentialPardonForm(const PresidentialPardonForm& s);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& s);

        std::string getTarget(void) const;

        void    execute(Bureaucrat const& executor) const;
};

#endif