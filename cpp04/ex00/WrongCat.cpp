/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:25:17 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/15 12:51:22 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    this->type = "WrongCat";
}

WrongCat::~WrongCat(void)
{
}

WrongCat::WrongCat(const WrongCat& _cat)
{
  this->type = _cat.getType();
}

WrongCat&  WrongCat::operator=(const WrongCat& _cat)
{
  if (this != &_cat)
    this->type = _cat.getType();
  return (*this);
}

void  WrongCat::makeSound(void) const
{
  std::cout << "Sound like Meow, but not..." << std::endl;
}

std::string  WrongCat::getType(void) const
{
  return (this->type);
}