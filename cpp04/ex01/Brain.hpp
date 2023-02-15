/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:40:16 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/13 21:08:12 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BRAIN_HPP_
#define _BRAIN_HPP_

#include <iostream>

class Brain
{
private:
    std::string *ideas;
public:
    Brain(void);
    Brain(Brain& _brain);
    virtual ~Brain(void);
    Brain&  operator=(Brain const& _brain);

    std::string*    getIdeas(void);
};

#endif