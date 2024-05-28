/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 14:45:04 by antferna          #+#    #+#             */
/*   Updated: 2024/05/28 15:13:12 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon){
}

HumanA::~HumanA()
{
}

void HumanA::attack(void){
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}