/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 16:42:54 by antferna          #+#    #+#             */
/*   Updated: 2024/06/05 16:44:45 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice():AMateria("ice"){
	std::cout << "Materia "<< getType() << " created" << std::endl;
}

Ice::Ice(const Ice &other){
	*this = other;
	std::cout << "Materia "<< getType() << " copied" << std::endl;
}

Ice::~Ice(){
	std::cout << "Materia "<< getType() << " destroyed" << std::endl;
}

Ice & Ice::operator=(const Ice &other){
	if(this != &other)
		this->_type = other._type;
	return *this;
}

AMateria* Ice::clone() const{
    return (new Ice(*this));
}

void    Ice::use( ICharacter& target ){
    std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}


