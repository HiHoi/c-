/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 19:19:16 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/16 17:18:35 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MATERIASOURCE_HPP_
#define _MATERIASOURCE_HPP_

#include "IMateriaSource.hpp"
#include <iostream>

class   MateriaSource : public IMateriaSource
{
    protected:
        AMateria    *(inventory[4]);
    public:
        MateriaSource(void);
        ~MateriaSource(void);
        MateriaSource(const MateriaSource& _materia);
        MateriaSource&  operator=(const MateriaSource& _materia);

        void    learnMateria(AMateria* _amateria);
        AMateria*   createMateria(std::string const& type);
};

#endif