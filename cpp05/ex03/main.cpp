/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:42:29 by antferna          #+#    #+#             */
/*   Updated: 2024/06/12 16:32:00 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int main()
{
    try {
        Intern  randomIntern;
        AForm	*formSh = randomIntern.makeForm("shrubbery", "Messi");
        AForm	*formRo = randomIntern.makeForm("robotomy", "ElBicho");
        AForm	*formPr = randomIntern.makeForm("presidential", "Vinisius");
        Bureaucrat bureaucrat("Pipo", 1);

        std::cout << "\n--------------- Form 1 ( Shrubbery ) ---------------" << std::endl;
        bureaucrat.signForm(*formSh);
        bureaucrat.executeForm(*formSh);
        std::cout << "\n--------------- Form 2 ( Robotomy ) ---------------" << std::endl;
        bureaucrat.signForm(*formRo);
        bureaucrat.executeForm(*formRo);
        bureaucrat.executeForm(*formRo);
        bureaucrat.executeForm(*formRo);
        bureaucrat.executeForm(*formRo);
        std::cout << "\n--------------- Form 3 ( President ) ---------------" << std::endl;
        bureaucrat.signForm(*formPr);
        bureaucrat.executeForm(*formPr);

        delete formSh;
        delete formRo;
        delete formPr;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}