/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:38:15 by antferna          #+#    #+#             */
/*   Updated: 2024/06/05 16:41:37 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure():AMateria("cure"){
	std::cout << "Materia "<< getType() << " created" << std::endl;
}

Cure::Cure(const Cure &other){
	*this = other;
	std::cout << "Materia "<< getType() << " copied" << std::endl;
}

Cure::~Cure(){
	std::cout << "Materia "<< getType() << " destroyed" << std::endl;
}

Cure & Cure::operator=(const Cure &other){
	if(this != &other)
		this->_type = other._type;
	return *this;
}

AMateria* Cure::clone() const{
    return (new Cure(*this));
}

void    Cure::use( ICharacter& target ){
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}


