/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:23:38 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/15 19:00:32 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CURE_HPP_
#define _CURE_HPP_

#include <iostream>
#include "AMateria.hpp"

class   Cure : public AMateria
{
    private:
    protected:
    public:
        Cure(void);
        ~Cure(void);
        Cure(const Cure& _ice);
        Cure&    operator=(const Cure& _ice);

        AMateria*   clone(void) const;
        
};

#endif