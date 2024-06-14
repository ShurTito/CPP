/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:17:13 by antferna          #+#    #+#             */
/*   Updated: 2024/06/14 14:41:02 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("target"){}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("PresidentialPardonForm", 25, 5), _target(target){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm(other), _target(other._target){}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm& other){
    (void)other;
    return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const{
    if(executor.getGrade() > this->getGradeToExec())
        throw AForm::GradeTooLowException();
    else
        std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}