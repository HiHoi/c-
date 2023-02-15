/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:25:33 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/15 12:47:21 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WRONGCAT_HPP_
#define _WRONGCAT_HPP_

#include <iostream>
#include "WrongAnimal.hpp"

class   WrongCat : public WrongAnimal
{
    private:
    protected:
        std::string type;
    public:
        WrongCat(void);
        ~WrongCat(void);
        WrongCat(const Cat& _cat);
        Cat&    operator=(const Cat& _cat);

        std::string getType(void) const;
        void    makeSound(void) const;
};

#endif