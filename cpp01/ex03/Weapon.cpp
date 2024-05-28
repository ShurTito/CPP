/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 14:29:21 by antferna          #+#    #+#             */
/*   Updated: 2024/05/28 15:02:15 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type){}

Weapon::~Weapon(){}

const std::string Weapon::getType(){
    return this->_type;
}

void Weapon::setType(std::string type){
    this->_type = type;
}