/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 12:09:19 by antferna          #+#    #+#             */
/*   Updated: 2024/05/28 12:42:09 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name):_name(name){}
Zombie::~Zombie(){
     std::cout << "Zombie " << this->_name << " has been destroyed" << std::endl;
}

void Zombie::announce(void){
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}