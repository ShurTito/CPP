/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 12:19:35 by antferna          #+#    #+#             */
/*   Updated: 2024/06/05 12:20:06 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat"){
    std::cout << this->_type << " constructor called" << std::endl;
}

WrongCat::~WrongCat(){
    std::cout << this->_type << " destructor called" << std::endl;
}

void    WrongCat::makeSound() const{
    std::cout << "Meow!" << std::endl;
}