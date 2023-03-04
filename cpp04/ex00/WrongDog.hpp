/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:25:35 by hoslim            #+#    #+#             */
/*   Updated: 2023/03/04 12:42:41 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  _WRONGDOG_HPP_
#define  _WRONGDOG_HPP_

#include <iostream>
#include "WrongAnimal.hpp"

class  WrongDog : public WrongAnimal
{
  private:
  protected:
    std::string  type;
  public:
    WrongDog(void);
    ~WrongDog(void);
    WrongDog(const WrongDog& _dog);
    WrongDog&  operator=(const WrongDog& _dog);

    std::string  getType(void) const;
    void  makeSound(void) const;
};

#endif