/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 13:45:15 by antferna          #+#    #+#             */
/*   Updated: 2024/06/19 13:55:26 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

int main(){
    
    Data *src = new Data("Guler");
    uintptr_t rawSrc = Serializer::serialize(src);
    Data *dest = Serializer::deserialize(rawSrc);

    std::cout << "Source: " << src->getName() << "\n";
    std::cout << "Serialiced and Deserialiced : " << dest->getName() << "\n";
    
    delete src;

    return 0;
}