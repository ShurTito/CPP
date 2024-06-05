/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 12:51:26 by antferna          #+#    #+#             */
/*   Updated: 2024/06/05 13:07:56 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain created." << std::endl;
}

Brain::~Brain(){
    std::cout << "Brain destroyed." << std::endl;
}

Brain::Brain(const Brain& other){
    *this = other;
}

Brain& Brain::operator=(const Brain& other)
{
    std::cout << "Brain copy called." << std::endl;
    if ( this != &other ) {
        for ( int i = 0; i < 100; i++ ) {
            this->_ideas[i] = other._ideas[i];
        }
    }
    return *this;
}