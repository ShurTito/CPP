/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 11:58:05 by antferna          #+#    #+#             */
/*   Updated: 2024/06/05 12:11:38 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
    std::cout << _type << " constructor called" << std::endl;
}

Dog::~Dog(){
    std::cout << _type << " destructor called" << std::endl;
}

void Dog::makeSound() const{
    std::cout << "Woof!" << std::endl;
}