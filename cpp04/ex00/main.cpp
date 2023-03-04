/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:25:11 by hoslim            #+#    #+#             */
/*   Updated: 2023/03/04 12:39:52 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int  main(void)
{
  const Animal* meta = new Animal();
  const Animal* j = new Dog();
  const Animal* i = new Cat();
  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  i->makeSound(); //will output the cat sound!
  j->makeSound();
  meta->makeSound();

  const WrongAnimal* wrong = new WrongAnimal();
  const WrongAnimal* wrongDog = new WrongDog();
  const WrongAnimal* wrongCat = new WrongCat();
  std::cout << wrongCat->getType() << " " << std::endl;
  std::cout << wrongDog->getType() << " " << std::endl;
  wrongCat->makeSound();
  wrongDog->makeSound();
  wrong->makeSound();
  return 0;
}