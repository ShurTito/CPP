/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 11:59:43 by antferna          #+#    #+#             */
/*   Updated: 2024/06/03 13:07:02 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
private:
    std::string     _name;
    unsigned int    _hitPoints;
    unsigned int    _energy;
    unsigned int    _attackDamage;
public:
    ClapTrap(std::string name);
    ~ClapTrap();
    ClapTrap(const ClapTrap &other);
    ClapTrap& operator=(const ClapTrap &other);

    void    attack(const std::string& taget);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
};



#endif