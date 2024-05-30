/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 13:13:41 by antferna          #+#    #+#             */
/*   Updated: 2024/05/30 14:44:14 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():x(0), y(0){
    //std::cout << "Default constructor called" << std::endl;
}

Point::Point(const float x, const float y) : x(x), y(y){
    //std::cout << "Float constructor called" << std::endl;
}

Point::Point(const Point &other) : x(other.x), y(other.y){
    //std::cout << "Copy constructor called" << std::endl;
}

Point::~Point(){
    //std::cout << "Destructor called" << std::endl;
}

Point& Point::operator=(const Point &other){
    if(this != &other){
        const_cast<Fixed&>(this->x) = other.x;
        const_cast<Fixed&>(this->y) = other.y;
    }
    return *this;
}

Fixed Point::getX() const{
    return x;
}

Fixed Point::getY() const{
    return y;
}
