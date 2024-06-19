/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 13:25:13 by antferna          #+#    #+#             */
/*   Updated: 2024/06/19 13:50:11 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdint.h>
#include "Data.hpp"

class Serializer
{
private:
    Serializer();
    Serializer(const Serializer &other);
    Serializer &operator=(const Serializer &other);

public:
    ~Serializer();
    static uintptr_t    serialize(Data *ptr);
    static Data         *deserialize(uintptr_t raw);
};
