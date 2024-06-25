/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 12:48:04 by antferna          #+#    #+#             */
/*   Updated: 2024/06/25 13:14:46 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

class ValueNotFoundException: public std::exception{
    public:
        const char *what() const throw(){
            return ("Value not found");
        }
};

template <typename T>
void easyfind(T&cont, int value);

#include "easyfind.tpp"