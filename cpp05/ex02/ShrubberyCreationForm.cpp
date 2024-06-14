/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 11:36:03 by antferna          #+#    #+#             */
/*   Updated: 2024/06/14 14:42:41 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("target"){}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137), _target(target){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other), _target(other._target){}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm& other){
    (void)other;
    return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const{
    if(!this->getSigned())
        throw AForm::NotSignedException();
    else if(executor.getGrade() > this->getGradeToExec())
        throw AForm::GradeTooLowException();

    std::ofstream file((_target + "_shrubbery").c_str());
    file << "               ,@@@@@@@," << std::endl;
    file << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
    file << "       ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
    file << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
    file << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
    file << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
    file << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
    file << "       |o|        | |         | |" << std::endl;
    file << "       |.|        | |         | |" << std::endl;
    file << "   .\\. \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
    file.close();
    
}