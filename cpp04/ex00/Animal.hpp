#ifndef  _ANIMAL_HPP_
#define  _ANIMAL_HPP_

#include <iostream>

class  Animal
{
  private:
  protected:
    std::string  type;
  public:
    Animal(void);
    Animal(const Animal& _animal);
    virtual  ~Animal(void);
    Animal&  operator=(const Animal& _animal);

    virtual void  makeSound(void) const;
    virtual std::string  getType(void) const;
};

#endif