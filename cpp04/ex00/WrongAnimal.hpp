/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:25:32 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/15 12:43:21 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WRONGANIMAL_HPP_
#define _WRONGANIMAL_HPP_

#include <iostream>

class WrongAnimal
{
private:
protected:
    std::string type;
public:
    WrongAnimal(void);
    ~WrongAnimal(void);
    virtual ~Animal(void);
    Animal& operator=(const Animal& _animal);

    virtual void    makeSound(void) const;
    virtual std::string  getType(void) const;
};

#endif
