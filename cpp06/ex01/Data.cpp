/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 13:32:39 by antferna          #+#    #+#             */
/*   Updated: 2024/06/19 13:54:07 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(): _name("default name"){}

Data::Data(const std::string name): _name(name){}

Data::Data(const Data &other): _name(other.getName()){}

Data &Data::operator=(const Data &other){
    if(this != &other)
        this->_name = other.getName();
    return (*this);
}

Data::~Data(){}

std::string Data::getName() const{
    return this->_name;
}