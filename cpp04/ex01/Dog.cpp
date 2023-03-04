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