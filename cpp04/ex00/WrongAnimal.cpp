/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:25:12 by hoslim            #+#    #+#             */
/*   Updated: 2023/03/03 18:59:49 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("wrong life")
{
}

WrongAnimal::~WrongAnimal(void)
{
}

WrongAnimal::WrongAnimal(const WrongAnimal& _animal) : type(_animal.type)
{
}

WrongAnimal&  WrongAnimal::operator=(const WrongAnimal& _animal)
{
  if (this != &_animal)
    this->type = _animal.getType();
  return (*this);
}

void  WrongAnimal::makeSound(void) const
{
  std::cout << "Make some wrong noise" << std::endl;
}

std::string  WrongAnimal::getType(void) const
{
  return (this->type);
}
