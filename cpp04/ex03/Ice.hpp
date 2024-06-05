/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 16:42:17 by antferna          #+#    #+#             */
/*   Updated: 2024/06/05 16:42:43 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria{
    public:
        Ice();
        ~Ice();
        Ice( Ice const & other);
        Ice& operator=( Ice const & other);

        virtual AMateria*   clone() const;
        virtual void        use(ICharacter& target);
};

#endif