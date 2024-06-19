/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 16:17:55 by antferna          #+#    #+#             */
/*   Updated: 2024/06/19 16:48:44 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T>
class Array{
private:
    T               *_arr;
    unsigned int    _size;
public:
    Array();
    Array(unsigned int n);
    Array(const Array &other);
    Array &operator=(const Array &other);
    ~Array();

    unsigned int size(void) const;
    T &operator[](unsigned int i);
    
    class OutOfBoundsException : public std::exception{
        public:
            virtual const char* what() const throw(){
            return "Index is out of bounds";
        }
    };
};

#include "Array.tpp"
