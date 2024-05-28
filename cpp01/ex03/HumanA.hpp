/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 14:40:45 by antferna          #+#    #+#             */
/*   Updated: 2024/05/28 15:13:27 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
   std::string _name;
   Weapon& _weapon;
public:
    HumanA(std::string name, Weapon& weapon);
    ~HumanA();
    void attack(void);
};

#endif