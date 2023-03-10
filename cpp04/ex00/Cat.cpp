/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:24:58 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/13 20:24:59 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
    this->type = "Cat";
}

Cat::~Cat(void)
{
}

Cat::Cat(const Cat& _cat)
{
  this->type = _cat.getType();
}

Cat&  Cat::operator=(const Cat& _cat)
{
  if (this != &_cat)
    this->type = _cat.getType();
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