/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 13:32:31 by antferna          #+#    #+#             */
/*   Updated: 2024/06/19 13:37:12 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Data
{
private:
    std::string _name;
public:
    Data();
    Data(const Data &other);
    Data(const std::string name);
    ~Data();
    Data &operator=(const Data &other);
    std::string getName() const;
};
