/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:05:46 by antferna          #+#    #+#             */
/*   Updated: 2024/06/05 17:19:12 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type(""){};

AMateria::AMateria(std::string const &type) : _type(type){
    std::cout << "AMateria " << getType() << " created" << std::endl;
}

AMateria::AMateria(AMateria const &other){
    *this = other;
}

AMateria& AMateria::operator=(const AMateria& other){
    if(this != &other){
        this->_type = other._type;
    }
    return *this;
}

AMateria::~AMateria(){
    std::cout << "AMateria " << getType() << " destroyed" << std::endl;
}

std::string const &AMateria::getType() const{
    return _type;
}

AMateria *AMateria::clone() const{
    return (AMateria*)this;
}

void AMateria::use(ICharacter &target){
    std::cout << "AMateria " << getType() << " used on " << target.getName() << std::endl;
}