/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:46:42 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/15 13:12:39 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  _DOG_HPP_
#define  _DOG_HPP_

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class  Dog : public Animal
{
	private:
		Brain* dogBrain;
	protected:
		std::string	type;
	public:
		Dog(void);
		~Dog(void);
		Dog(const Dog& _dog);
		Dog&  operator=(const Dog& _dog);

		std::string  getType(void) const;
		void  makeSound(void) const;
};

#endif