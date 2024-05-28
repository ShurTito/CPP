/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 13:22:20 by antferna          #+#    #+#             */
/*   Updated: 2024/05/28 13:36:29 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name){
    Zombie  *zombies = new Zombie[N];
    
    for (int i = 0; i < N; ++i) {
        zombies[i].setName(name);
    }

    return zombies;
}