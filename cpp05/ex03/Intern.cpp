/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 15:37:11 by antferna          #+#    #+#             */
/*   Updated: 2024/06/12 16:14:03 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(){}

Intern::Intern(const Intern& other){
    *this = other;
}

Intern::~Intern(){}

Intern& Intern::operator=(const Intern& other){
    (void) other;
    return (*this);
}

AForm* Intern::makeForm(std::string name, std::string target){
    std::string formNames[] = {"shrubbery", "robotomy", "presidential"};
    AForm* forms[] = {
        new ShrubberyCreationForm(target),
        new RobotomyRequestForm(target),
        new PresidentialPardonForm(target)
    };

    for (int i = 0; i < 3; i++) {
        if (formNames[i] == name) {
            std::cout << "Intern creates " << name << std::endl;
            for (int j = 0; j < 3; j++) {
                if (j != i)
                    delete forms[j];
            }
            return forms[i];
        }
    }
    std::cout << "Intern can't create " << name << " form" << std::endl;
    for (int i = 0; i < 3; i++) {
        delete forms[i];
    }
    return NULL;
}