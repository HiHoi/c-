/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:25:32 by hoslim            #+#    #+#             */
/*   Updated: 2023/03/04 12:40:49 by hoslim           ###   ########.fr       */
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
    WrongAnimal(const WrongAnimal& _animal);
    ~WrongAnimal(void);
    WrongAnimal& operator=(const WrongAnimal& _animal);

    void    makeSound(void) const;
    std::string  getType(void) const;
};

#endif
