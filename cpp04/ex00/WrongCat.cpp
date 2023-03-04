/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:25:17 by hoslim            #+#    #+#             */
/*   Updated: 2023/03/03 18:59:19 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : type("WrongCat")
{
}

WrongCat::~WrongCat(void)
{
}

WrongCat::WrongCat(const WrongCat& _cat) : type(_cat.type)
{
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