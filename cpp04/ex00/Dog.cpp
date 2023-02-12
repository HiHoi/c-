#include "Dog.hpp"

Dog::Dog(void)
{
    this->type = "Dog";
}

Dog::~Dog(void)
{
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