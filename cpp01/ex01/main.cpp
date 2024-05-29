/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 13:22:30 by antferna          #+#    #+#             */
/*   Updated: 2024/05/29 17:17:46 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){
    std::string name;

    std::cout << "Creating zombie horde." << std::endl;
    std::cout << "Zombies name: " << std::flush;
    std::cin >> name;

    size_t N = 5;
    Zombie *zombies = zombieHorde(N, name);
    for (size_t i = 0; i < N; i++)
    {
        zombies[i].announce();
    }
    delete [] zombies;
    return 0;
}