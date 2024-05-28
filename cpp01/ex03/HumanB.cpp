/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 14:53:04 by antferna          #+#    #+#             */
/*   Updated: 2024/05/28 15:22:00 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL){}

HumanB::~HumanB(){}

void HumanB::attack(void){
    if (this->_weapon != NULL && this->_weapon->getType() != "") {
        std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
    } else {
        std::cout << this->_name << " doesn't have a weapon to attack." << std::endl;
    }
}

void HumanB::setWeapon(Weapon& weapon){
    this->_weapon = &weapon;
}
