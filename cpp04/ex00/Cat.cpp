/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 12:04:29 by antferna          #+#    #+#             */
/*   Updated: 2024/06/05 12:11:46 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
    std::cout << _type << " constructor called" << std::endl;
}

Cat::~Cat(){
    std::cout << _type << " destructor called" << std::endl;
}

void Cat::makeSound() const{
    std::cout << "Meow!" << std::endl;
}