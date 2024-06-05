/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 12:51:19 by antferna          #+#    #+#             */
/*   Updated: 2024/06/05 13:06:35 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
private:
    std::string _ideas[100];
public:
    Brain();
    ~Brain();
    Brain(const Brain& other);
    Brain& operator=(const Brain& other);
};

#endif