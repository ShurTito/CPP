/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:40:19 by antferna          #+#    #+#             */
/*   Updated: 2024/06/10 15:35:26 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( std::string const & name) : _name(name){
    for (int i = 0; i < 4; i++) {
        this->_inventory[i] = NULL;
    }
    std::cout << "Character " << this->_name << " created" << std::endl;
}

Character::Character(Character const &other ) : _name(other._name){
    *this = other;
    std::cout << "Character " << this->_name << " created" << std::endl;
}

Character& Character::operator=(Character const & other ){
    if (this != &other)
    {
        this->_name = other._name;
        for (int i = 0; i < 4; i++)
            this->_inventory[i] = other._inventory[i];
    }
    return *this;
}

Character::~Character(){
    std::cout << "Character " << this->_name << " destroyed" << std::endl;
    for (int i = 0; i < 4; i++){
        if (this->_inventory[i])
            delete this->_inventory[i];
    }
}

std::string const& Character::getName() const{
    return _name;
}

void Character::equip(AMateria *m){
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] == NULL)
        {
            this->_inventory[i] = m;
            std::cout << "Character " << getName() << " has equipped " << m->getType() << std::endl;
            return;
        }
    }
    std::cout << "Character " << getName() << " has inventory full" << std::endl;
}

void Character::unequip(int idx){
    if (idx >= 4){
        std::cout << "Character " << getName() << " invalid index, cant unequip" << std::endl;
        return ;
    }
    if (this->_inventory[idx])
    {
        std::cout << "Character " << getName() << " unequipped " << this->_inventory[idx]->getType() << std::endl;
        delete this->_inventory[idx];
        this->_inventory[idx] = NULL;
    }else{
        std::cout << "Character " << getName() << " cant unequip" << std::endl;
    }
}

void Character::use(int idx, ICharacter& target){
    if (idx >= 4){
        std::cout << "Character " << getName() << " invalid index, cant use" << std::endl;
        return ;
    }
    if(this->_inventory[idx]){
        this->_inventory[idx]->use(target);
        std::cout << "Character " << getName() << " used " << this->_inventory[idx]->getType() << std::endl;
    }else{
        std::cout << "Character " << getName() << " cant use this" << std::endl;
    }
}