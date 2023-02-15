/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:25:23 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/13 20:25:40 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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