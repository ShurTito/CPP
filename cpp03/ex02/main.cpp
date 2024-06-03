/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 11:59:32 by antferna          #+#    #+#             */
/*   Updated: 2024/06/03 15:24:14 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    
    FragTrap frag1("Fraggy");

    frag1.attack("target");

    frag1.highFivesGuys();

    frag1.takeDamage(40);
    frag1.beRepaired(30);

    for (int i = 0; i < 100; ++i) {
        frag1.attack("enemy");
    }
    frag1.beRepaired(10);
    return 0;
}
