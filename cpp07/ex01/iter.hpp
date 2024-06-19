/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 16:09:24 by antferna          #+#    #+#             */
/*   Updated: 2024/06/19 16:14:10 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
void iter(T *arr, size_t size, void (*f)(T &)){
    for (size_t i = 0; i < size; i++)
    {
        f(arr[i]);
    }
}

template <typename T>
void print(T &c){
    std::cout << c << std::endl;
}
