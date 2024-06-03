/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 11:59:32 by antferna          #+#    #+#             */
/*   Updated: 2024/06/03 15:50:52 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() {
    DiamondTrap diamond1("Diamondy");

    diamond1.attack("target");

    diamond1.whoAmI();

    diamond1.takeDamage(50);
    diamond1.beRepaired(40);

    for (int i = 0; i < 50; ++i) {
        diamond1.attack("enemy");
    }
    diamond1.beRepaired(10);

    return 0;
}
