/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:30:25 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/20 16:25:53 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
}

Intern::~Intern(void)
{
}

Intern::Intern(const Intern& i)
{
    (void)i;
}

Intern& Intern::operator=(const Intern& i)
{
    (void)i;
    return (*this);
}

static Form*   makeShruberry(std::string target)
{
    Form*   shrubbery = new ShrubberyCreationForm(target);

    return (shrubbery);
}

static Form*   makeRobotomy(std::string target)
{
    Form*   robotomy = new RobotomyRequestForm(target);

    return (robotomy);
}

static Form*   makePresident(std::string target)
{
    Form*   president = new PresidentialPardonForm(target);

    return (president);
}

Form*   Intern::makeForm(std::string name, std::string target)
{
    std::string types[3] = {
        "shruddery request", "robotomy request", "presidential request"
    };
    Form    *(*func[3])(std::string _target) = {makeShruberry, makeRobotomy, makePresident};
    Form*   ret = NULL;

    try
    {
        for (int i = 0; i < 3; i++)
        {
            if (types[i] == name)
            {
                ret = func[i](target);
                std::cout << "Intern creates " << *ret << std::endl;
                return (ret);
            }
        }
        throw (TypeException());
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    return (ret);
}

const char* Intern::Exception::what() const throw()
{
    return ("It's normal exception");
}

const char*    Intern::TypeException::what() const throw()
{
    return ("Sir, I can't find that type...");
}
