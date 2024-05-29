/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:40:07 by antferna          #+#    #+#             */
/*   Updated: 2024/05/29 12:09:33 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl{
    
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    void (Harl::*complaintFunctions[4])(void);
    std::string levels[4];
public:
    Harl();
    void complain(std::string level);
    void filter(std::string level);
};

#endif