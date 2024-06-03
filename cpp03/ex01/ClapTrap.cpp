/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 11:59:52 by antferna          #+#    #+#             */
/*   Updated: 2024/06/03 13:12:19 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energy(10), _attackDamage(0){
    std::cout << "ClapTrap Default Constructor called for -> " << name << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called for -> " << this->_name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
    *this = other;
    std::cout << "ClapTrap Copy Constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other){
    std::cout << "ClapTrap Copy assignment operator called" << std::endl;
    if(this != &other)
    {
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_attackDamage = other._attackDamage;
        this->_energy = other._energy;
    }
    return *this;
}

void    ClapTrap::attack(const std::string& target){
    if(_hitPoints <= 0){
        std::cout << "ClapTrap " << _name << " is dead and can't do anything!" << std::endl;
        return ;
    }
    if(_energy <= 0){
        std::cout << "ClapTrap " << _name << " has no energy left!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " damage!" << std::endl;
    _energy--;
}

void    ClapTrap::takeDamage(unsigned int amount){
    if(_hitPoints <= 0){
        std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
        return ;
    }
    if(_hitPoints <= amount){
        std::cout << "ClapTrap " << _name << " receives " << amount << " damage and died!" << std::endl;
        _hitPoints = 0;
        return ;
    }
    std::cout << "ClapTrap " << _name << " receives " << amount << " damage!" << std::endl;
    _hitPoints -= amount;
}

void    ClapTrap::beRepaired(unsigned int amount){
    if(_hitPoints <= 0){
        std::cout << "ClapTrap " << _name << " is dead and can't heal!" << std::endl;
        return ;
    }
    if(_energy <= 0){
        std::cout << "ClapTrap " << _name << " has no energy left!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " repairs itself for " << amount << " hit points!" << std::endl;
    _hitPoints += amount;
    _energy--;
}
