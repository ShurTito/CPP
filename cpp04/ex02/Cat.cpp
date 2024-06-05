/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 12:04:29 by antferna          #+#    #+#             */
/*   Updated: 2024/06/05 13:48:56 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat"), _brain(new Brain()){
    std::cout << _type << " constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : AAnimal(other), _brain(new Brain(*other._brain)) {
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    std::cout << "Cat copy assignment operator called" << std::endl;
    if (this != &other) {
        AAnimal::operator=(other);
        *_brain = *other._brain;
    }
    return *this;
}
Cat::~Cat(){
    delete _brain;
    std::cout << _type << " destructor called" << std::endl;
}

void Cat::makeSound() const{
    std::cout << "Meow!" << std::endl;
}