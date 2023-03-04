/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:00:30 by hoslim            #+#    #+#             */
/*   Updated: 2023/03/04 17:17:59 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : type("Cat")
{
    this->catBrain = new Brain();
}

Cat::~Cat(void)
{
  delete this->catBrain;
}

Cat::Cat(const Cat& _cat) : type(_cat.type)
{
  catBrain = new Brain(*(_cat).catBrain);
}

Cat&  Cat::operator=(const Cat& _cat)
{
  if (this != &_cat)
  {
    this->type = _cat.getType();
    delete this->catBrain;
    catBrain = new Brain(*(_cat).catBrain);
  }
  return (*this);
}

void  Cat::makeSound(void) const
{
  std::cout << "Meow" << std::endl;
}

std::string  Cat::getType(void) const
{
  return (this->type);
}