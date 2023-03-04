/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:25:02 by hoslim            #+#    #+#             */
/*   Updated: 2023/03/03 18:55:21 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("life")
{
}

Animal::~Animal(void)
{
}

Animal::Animal(const Animal& _animal) : type(_animal.type)
{
}

Animal&  Animal::operator=(const Animal& _animal)
{
  if (this != &_animal)
    this->type = _animal.getType();
  return (*this);
}

void  Animal::makeSound(void) const
{
  std::cout << "Make some noise" << std::endl;
}

std::string  Animal::getType(void) const
{
  return (this->type);
}