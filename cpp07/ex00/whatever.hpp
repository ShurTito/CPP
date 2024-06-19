/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:58:13 by antferna          #+#    #+#             */
/*   Updated: 2024/06/19 16:03:02 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename T>

void swap(T &a, T &b){
    T aux = a;
    a = b;
    b = aux;
}

template<typename T>

T min(T &a, T &b){
    if(a < b)
        return a;
    return b;
}

template<typename T>

T max(T &a, T &b){
    if(a > b)
        return a;
    return b;
}