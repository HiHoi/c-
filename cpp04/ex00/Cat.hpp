#ifndef  _CAT_HPP_
#define  _CAT_HPP_

#include <iostream>
#include "Animal.hpp"

class  Cat : public Animal
{
  private:
  protected:
    std::string  type;
  public:
    Cat(void);
    ~Cat(void);
    Cat(const Cat& _cat);
    Cat&  operator=(const Cat& _cat);

    std::string  getType(void) const;
    void  makeSound(void) const;
};

#endif