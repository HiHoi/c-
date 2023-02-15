/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:46:48 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/13 20:50:51 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  _CAT_HPP_
#define  _CAT_HPP_

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class  Cat : public Animal
{
	private:
		Brain*	catBrain;
	protected:
		std::string	type;
	public:
		Cat(void);
		~Cat(void);
		Cat(const Cat& _cat);
		Cat&  operator=(const Cat& _cat);

		std::string  getType(void) const;
		void  makeSound(void) const;
};

#endif