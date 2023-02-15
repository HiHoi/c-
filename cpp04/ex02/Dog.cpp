/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:00:23 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/15 13:00:26 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
    this->type = "Dog";
    this->dogBrain = new Brain();
}

Dog::~Dog(void)
{
  delete this->dogBrain;
}

Dog::Dog(const Dog& _dog)
{
  this->type = _dog.getType();
}

Dog&  Dog::operator=(const Dog& _dog)
{
  if (this != &_dog)
    this->type = _dog.getType();
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