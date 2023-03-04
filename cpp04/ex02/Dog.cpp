/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:00:23 by hoslim            #+#    #+#             */
/*   Updated: 2023/03/04 17:17:57 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : type("Dog")
{
    this->dogBrain = new Brain();
}

Dog::~Dog(void)
{
  delete this->dogBrain;
}

Dog::Dog(const Dog& _dog) : type(_dog.type)
{
  dogBrain = new Brain(*(_dog).dogBrain);
}

Dog&  Dog::operator=(const Dog& _dog)
{
  if (this != &_dog)
  {
    this->type = _dog.getType();
    delete dogBrain;
    dogBrain = new Brain(*(_dog).dogBrain);
  }
  return (*this);
}

void  Dog::makeSound(void) const
{
  std::cout << "Bow" << std::endl;
}

std::string  Dog::getType(void) const
{
  return (this->type);
}