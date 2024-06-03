/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 11:59:32 by antferna          #+#    #+#             */
/*   Updated: 2024/06/03 13:38:26 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(){

    ClapTrap clap1("El_Bicho");
    ClapTrap clap2("Messi");

    clap1.attack("target");
    clap2.attack("target");

    clap1.takeDamage(5);
    clap1.takeDamage(6);

    clap2.takeDamage(3);
    clap2.beRepaired(5);
    clap2.beRepaired(5);

    for (int i = 0; i < 10; ++i) {
        clap2.attack("target");
    }
    clap2.beRepaired(5);
    ScavTrap scav1("Scavvy");

    scav1.attack("enemy");
    scav1.guardGate();
    scav1.takeDamage(30);
    scav1.beRepaired(20);

    for (int i = 0; i < 50; ++i) {
        scav1.attack("enemy");
    }
    scav1.beRepaired(10);

    ScavTrap scav2(scav1);
    scav2.guardGate();

    return 0;
}