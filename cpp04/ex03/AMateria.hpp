/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:05:43 by antferna          #+#    #+#             */
/*   Updated: 2024/06/05 17:18:10 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
    std::string _type;
public:
    AMateria();
    AMateria(std::string const &type);
    AMateria(AMateria const &other);
    AMateria& operator=(const AMateria& other);
    virtual ~AMateria();

    std::string const   &getType() const;
    virtual AMateria    *clone() const = 0;
    virtual void        use(ICharacter &target);
};

#endif