#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(void) : type("Cat")
{
    this->catBrain = new Brain();
}

Cat::~Cat(void)
{
  delete this->catBrain;
}

Cat::Cat(const Cat& _cat) : type(_cat.type)
{
  catBrain = new Brain(*(_cat).catBrain);
}

Cat&  Cat::operator=(const Cat& _cat)
{
  if (this != &_cat)
  {
    this->type = _cat.getType();
    delete this->catBrain;
    catBrain = new Brain(*(_cat).catBrain);
  }
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