/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:24:18 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/15 17:32:52 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brueaucrat.hpp"

Brueaucrat::Brueaucrat(void)
{
}

Brueaucrat::~Brueaucrat(void)
{
}

Brueaucrat::Brueaucrat(const Brueaucrat& _br)
{
    this.name = _br.getName();
    this.grade = _br.getGrade();
}

Brueaucrat& Brueaucrat::operator=(const Brueaucrat& _br)
{
    if (this != &_br)
    {
        this.name = _br.getName();
        this.grade = _br.getGrade()
    }
    return (*this);
}

std::string    Brueaucrat::getName(void)
{
    return (this.name);
}

int Brueaucrat::getGrade(void)
{
    return (this.grade);
}
