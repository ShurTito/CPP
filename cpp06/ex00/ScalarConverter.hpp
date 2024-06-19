/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:32:55 by antferna          #+#    #+#             */
/*   Updated: 2024/06/19 12:49:37 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <limits.h>
#include <stdlib.h>

enum e_types{
    CHA,
    INT,
    FLT,
    DBL,
    PLF,
    PLD
};

class ScalarConverter
{
private:
    ScalarConverter();
    ScalarConverter(ScalarConverter &other);
    ScalarConverter &operator=(const ScalarConverter &other);
public:
    
    ~ScalarConverter();
    static void convert(const std::string str);
};
