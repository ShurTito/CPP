/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:13:44 by antferna          #+#    #+#             */
/*   Updated: 2024/06/03 15:29:11 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
private:
    std::string _name;

public:
    DiamondTrap(std::string name);
    ~DiamondTrap();

    DiamondTrap(const DiamondTrap &other);
    DiamondTrap& operator=(const DiamondTrap& other);
    void attack(const std::string& target);
    void whoAmI();
};

#endif
