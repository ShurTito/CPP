/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:40:18 by antferna          #+#    #+#             */
/*   Updated: 2024/06/10 12:04:22 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


Harl::Harl(){
    complaintFunctions[0] = &Harl::debug;
    complaintFunctions[1] = &Harl::info;
    complaintFunctions[2] = &Harl::warning;
    complaintFunctions[3] = &Harl::error;

    levels[0] = "DEBUG";
    levels[1] = "INFO";
    levels[2] = "WARNING";
    levels[3] = "ERROR";
}

void Harl::debug(void){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void){
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void){
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void){
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level){
    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level){
            (this->*complaintFunctions[i])();
            return ;
        }
    }
    std::cout << "Invalid level: " << level << std::endl;
}

void Harl::filter(std::string level){
    int i;
    for (i = 0; i < 4 && !(levels[i] == level); i++){}
    switch (i)
    {
    case 0:
        std::cout << "[ DEBUG ]" << std::endl;
        this->debug();
    case 1:
        std::cout << "[ INFO ]" << std::endl;
        this->info();
    case 2:
        std::cout << "[ WARNING ]" << std::endl;
        this->warning();
    case 3:
        std::cout << "[ ERROR ]" << std::endl;
        this->error();
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        break;
    }
    
}