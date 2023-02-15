/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 19:19:16 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/15 19:26:40 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MATERIASOURCE_
#define _MATERIASOURCE_

#include <iostream>

class   MateriaSource : public IMateriaSource
{
    protected:
        std::string 
    public:
        MateriaSource(void);
        ~MateriaSource(void);
        MateriaSource(const MateriaSource& _materia);
        MateriaSource&  operator=(const MateriaSource& _materia);

        void    learnMateria(AMateria* _amateria);
        AMateria*   createMateria(std::string const& type);
};

#endif