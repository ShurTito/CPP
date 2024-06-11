/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:42:29 by antferna          #+#    #+#             */
/*   Updated: 2024/06/11 12:44:02 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){
    try
    {
        Bureaucrat bur("Peter", 0);
        std::cout << bur << std::endl;
        bur.incrementGrade();
    }
    catch(Bureaucrat::GradeTooHighException& e){
        std::cout << e.what() << std::endl;
    }

    try
    {
        Bureaucrat bur("Messi", 1);
        std::cout << bur << std::endl;
        bur.incrementGrade();
    }
    catch(Bureaucrat::GradeTooHighException& e){
        std::cout << e.what() << std::endl;
    }

    try
    {
        Bureaucrat bur("El_Bicho", 150);
        std::cout << bur << std::endl;
        bur.decrementGrade();
    }
    catch(Bureaucrat::GradeTooLowException& e){
        std::cout << e.what() << std::endl;
    } 

    return 0;
}