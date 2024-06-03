/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 11:59:32 by antferna          #+#    #+#             */
/*   Updated: 2024/06/03 13:09:20 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

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

    ClapTrap clap3(clap2);
    clap3.attack("target");
    clap1.attack("target");

    return 0;
}