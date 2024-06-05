/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 11:42:38 by antferna          #+#    #+#             */
/*   Updated: 2024/06/05 12:08:16 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal"){
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type){
    std::cout << "Animal " << _type << " constructor called" << std::endl;
}

Animal::Animal(const Animal& other){
    std::cout << "Animal copy constructor called" << std::endl;
    *this = other;
}

Animal& Animal::operator=(const Animal& other){
    std::cout << "Animal assignment operator called" << std::endl;
    if(this != &other)
        this->_type = other._type;
    return *this;
}

Animal::~Animal(){
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const{
    std::cout << "Some generic animal sound" << std::endl;
}

std::string Animal::getType() const {
    return _type;
}