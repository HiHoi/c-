/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:25:18 by hoslim            #+#    #+#             */
/*   Updated: 2023/03/03 18:58:52 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog(void) : type("WrongDog")
{
}

WrongDog::~WrongDog(void)
{
}

WrongDog::WrongDog(const WrongDog& _dog) : type(_dog.type)
{
}

WrongDog&  WrongDog::operator=(const WrongDog& _dog)
{
  if (this != &_dog)
    this->type = _dog.getType();
  return (*this);
}

void  WrongDog::makeSound(void) const
{
  std::cout << "Sound like Bow, but not..." << std::endl;
}

std::string  WrongDog::getType(void) const
{
  return (this->type);
}