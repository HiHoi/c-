/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:24:51 by hoslim            #+#    #+#             */
/*   Updated: 2023/03/04 12:49:11 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    this->ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
        this->ideas[i] = "FOOD";
}

Brain::~Brain(void)
{
    delete [] this->ideas;
}

Brain::Brain(const Brain& _brain)
{
    std::string* buf = _brain.getIdeas();
    this->ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
        this->ideas[i] = buf[i];
}

Brain& Brain::operator=(Brain const& _brain)
{
    if (this != &_brain)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = _brain.ideas[i];
    }
    return (*this);
}

std::string*    Brain::getIdeas(void) const
{
    return(this->ideas);
}
