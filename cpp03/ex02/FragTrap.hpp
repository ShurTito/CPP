/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 14:57:05 by antferna          #+#    #+#             */
/*   Updated: 2024/06/03 15:24:31 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
public:
    FragTrap(std::string name);
    ~FragTrap();

    FragTrap(const FragTrap &other);
    FragTrap& operator=(const FragTrap& other);
    
    void highFivesGuys();
};

#endif