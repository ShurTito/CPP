/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 13:20:17 by antferna          #+#    #+#             */
/*   Updated: 2024/06/03 13:28:46 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    _hitPoints = 100;
    _energy = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap Constructor called for -> " << _name << std::endl;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap Destructor called for -> " << _name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
    *this = other;
    std::cout << "ScavTrap Copy Constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    std::cout << "ScavTrap Copy assignment operator called" << std::endl;
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    return *this;
}

void ScavTrap::attack(const std::string& target) {
    if (_hitPoints <= 0) {
        std::cout << "ScavTrap " << _name << " is dead and can't do anything!" << std::endl;
        return;
    }
    if (_energy <= 0) {
        std::cout << "ScavTrap " << _name << " has no energy left!" << std::endl;
        return;
    }
    std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " damage!" << std::endl;
    _energy--;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode!" << std::endl;
}