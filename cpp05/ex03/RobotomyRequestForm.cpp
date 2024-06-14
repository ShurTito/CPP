/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 11:56:46 by antferna          #+#    #+#             */
/*   Updated: 2024/06/14 14:41:52 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("target"){}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm", 72, 45), _target(target){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other), _target(other._target){}

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm& other){
    (void)other;
    return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const{
    static int i;
    if(executor.getGrade() > this->getGradeToExec())
        throw AForm::GradeTooLowException();
    else{
        if(i % 2 == 0)
            std::cout << "BZZZZTTT! " << _target << " has been robotomized!" << std::endl;
        else
            std::cout << "Robotomy failed! " << _target << " survived" << std::endl;
        i++;
    }
}