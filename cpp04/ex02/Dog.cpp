/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 11:58:05 by antferna          #+#    #+#             */
/*   Updated: 2024/06/05 13:40:36 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog"), _brain(new Brain()){
    std::cout << _type << " constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : AAnimal(other), _brain(new Brain(*other._brain)) {
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
    std::cout << "Dog copy assignment operator called" << std::endl;
    if (this != &other) {
        AAnimal::operator=(other);
        *_brain = *other._brain;
    }
    return *this;
}
Dog::~Dog(){
    delete _brain;
    std::cout << _type << " destructor called" << std::endl;
}

void Dog::makeSound() const{
    std::cout << "Woof!" << std::endl;
}