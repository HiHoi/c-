#ifndef  _DOG_HPP_
#define  _DOG_HPP_

#include <iostream>
#include "Animal.hpp"

class  Dog : public Animal
{
  private:
  protected:
    std::string  type;
  public:
    Dog(void);
    ~Dog(void);
    Dog(const Dog& _dog);
    Dog&  operator=(const Dog& _dog);

    std::string  getType(void) const;
    void  makeSound(void) const;
};

#endif