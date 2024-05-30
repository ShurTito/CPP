/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 17:20:42 by antferna          #+#    #+#             */
/*   Updated: 2024/05/30 12:58:33 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0){
    //std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int value) : _value(value << _fractionalBits){
    //std::cout << "Int constructor called" << std::endl;  
}

Fixed::Fixed(float value) : _value(roundf(value * (1 << _fractionalBits))){
    //std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other){
    //std::cout << "Copy constructor called" << std::endl;
    this->_value = other.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& other){
    //std::cout << "Copy assignment operator called" << std::endl;
    if(this != &other)
        this->_value = other.getRawBits();
    return *this;
}

Fixed::~Fixed(){
    //std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const{
    //std::cout << "getRawBits member function called" << std::endl;
    return this->_value;
}

void Fixed::setRawBits(int const raw){
    this->_value = raw;
    //std::cout << "setRawBits member function called" << std::endl;
}

float Fixed::toFloat(void) const{
    return (static_cast<float>(_value) / (1 << _fractionalBits));
}

int Fixed::toInt(void) const{
    return _value >> _fractionalBits;
}

std::ostream& operator<<(std::ostream &os, const Fixed &fixed){
    os << fixed.toFloat();
    return os;
}

bool Fixed::operator>(const Fixed &other) const{
    return this->_value > other._value;
}

bool Fixed::operator<(const Fixed &other) const{
    return this->_value < other._value;
}

bool Fixed::operator>=(const Fixed &other) const{
    return this->_value >= other._value;
}

bool Fixed::operator<=(const Fixed &other) const{
    return this->_value <= other._value;
}

bool Fixed::operator==(const Fixed &other) const{
    return this->_value == other._value;
}

bool Fixed::operator!=(const Fixed &other) const{
    return this->_value != other._value;
}

Fixed Fixed::operator+(const Fixed &other) const{
    Fixed result;
    result.setRawBits(this->_value + other._value);
    return result;
}

Fixed Fixed::operator-(const Fixed &other) const{
    Fixed result;
    result.setRawBits(this->_value - other._value);
    return result;
}

Fixed Fixed::operator*(const Fixed &other) const{
    Fixed result;
    result.setRawBits((this->_value * other._value) >> _fractionalBits);
    return result;
}

Fixed Fixed::operator/(const Fixed &other) const{
    Fixed result;
    result.setRawBits((this->_value << _fractionalBits) / other._value);
    return result;
}

Fixed& Fixed::operator++(){
    this->_value++;
    return *this;
}

Fixed Fixed::operator++(int){
    Fixed temp(*this);
    this->_value++;
    return temp;
}

Fixed& Fixed::operator--(){
    this->_value--;
    return *this;
}

Fixed Fixed::operator--(int){
    Fixed temp(*this);
    this->_value--;
    return temp;
}

Fixed& Fixed::min(Fixed &a, Fixed &b){
    if(a < b)
        return a;
    return b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b){
    if(a < b)
        return a;
    return b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b){
    if(a > b)
        return a;
    return b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b){
    if(a > b)
        return a;
    return b;
}