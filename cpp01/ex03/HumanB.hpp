/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 14:51:55 by antferna          #+#    #+#             */
/*   Updated: 2024/05/28 15:20:57 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"


class HumanB
{
private:
   std::string _name;
   Weapon* _weapon;
public:
    HumanB(std::string name);
    ~HumanB();
    void attack(void);
    void setWeapon(Weapon& weapon);
};

#endif