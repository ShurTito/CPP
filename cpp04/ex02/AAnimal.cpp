/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 11:42:38 by antferna          #+#    #+#             */
/*   Updated: 2024/06/05 12:08:16 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("AAnimal"){
    std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type){
    std::cout << "AAnimal " << _type << " constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other){
    std::cout << "AAnimal copy constructor called" << std::endl;
    *this = other;
}

AAnimal& AAnimal::operator=(const AAnimal& other){
    std::cout << "AAnimal assignment operator called" << std::endl;
    if(this != &other)
        this->_type = other._type;
    return *this;
}

AAnimal::~AAnimal(){
    std::cout << "AAnimal destructor called" << std::endl;
}

void AAnimal::makeSound() const{
    std::cout << "Some generic AAnimal sound" << std::endl;
}

std::string AAnimal::getType() const {
    return _type;
}