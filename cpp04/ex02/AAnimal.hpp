/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 11:42:31 by antferna          #+#    #+#             */
/*   Updated: 2024/06/05 13:36:38 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class AAnimal
{
protected:
    std::string _type;
public:
    AAnimal();
    AAnimal(std::string type);
    AAnimal(const AAnimal& other);
    AAnimal& operator=(const AAnimal& other);
    virtual ~AAnimal();
    
    virtual void makeSound() const = 0;
    std::string getType() const;
};



#endif