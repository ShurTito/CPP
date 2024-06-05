/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:38:12 by antferna          #+#    #+#             */
/*   Updated: 2024/06/05 16:03:56 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria{
	public:
		Cure();
		Cure(const Cure &other);
		~Cure();
		Cure & operator=(const Cure &other);
		
		virtual AMateria *clone() const;
		virtual void      use(ICharacter &target);
};

#endif