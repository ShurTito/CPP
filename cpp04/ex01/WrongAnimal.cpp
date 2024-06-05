/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 12:15:29 by antferna          #+#    #+#             */
/*   Updated: 2024/06/05 12:18:25 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type( "WrongAnimal" ) {
    std::cout << this->_type << " constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type){
    std::cout << "WrongAnimal " << this->_type << " constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& other){
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = other;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& other ){
    std::cout << "WrongAnimal assignment operator called" << std::endl;
    if (this != &other) {
        this->_type = other._type;
    }
    return *this;
}

void WrongAnimal::makeSound() const{
    std::cout << "WrongAnimal makeSound called" << std::endl;
}

std::string    WrongAnimal::getType() const{
    return this->_type;
}