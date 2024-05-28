/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 13:22:38 by antferna          #+#    #+#             */
/*   Updated: 2024/05/28 13:37:02 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){}
Zombie::Zombie(std::string name):_name(name){}
Zombie::~Zombie(){
     std::cout << "Zombie " << this->_name << " has been destroyed" << std::endl;
}

void Zombie::announce(void){
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name){
    this->_name = name;
}
