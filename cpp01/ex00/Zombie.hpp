/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 12:02:20 by antferna          #+#    #+#             */
/*   Updated: 2024/05/28 12:41:02 by antferna         ###   ########.fr       */
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
    Zombie(std::string name);
    ~Zombie();
    void announce(void);


};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif