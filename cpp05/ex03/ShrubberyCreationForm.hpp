/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:58:33 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/18 15:42:15 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SHRUBBERY_CREATION_HPP_
#define _SHRUBBERY_CREATION_HPP_

#include <iostream>
#include <fstream>
#include <string>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class   ShrubberyCreationForm : public Form
{
    private:
        std::string target;
    public:
        ShrubberyCreationForm(std::string _target);
        ~ShrubberyCreationForm(void);
        ShrubberyCreationForm(const ShrubberyCreationForm& s);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& s);

        std::string getTarget(void) const;

        void    execute(Bureaucrat const& executor) const;
};

#endif