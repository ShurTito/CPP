/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 13:22:46 by antferna          #+#    #+#             */
/*   Updated: 2024/05/28 13:36:04 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>


class Zombie{

private:
    std::string _name;

public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    void announce(void);
    void setName(std::string name);

};

Zombie* zombieHorde(int N, std::string name );

#endif