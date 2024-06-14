/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:57:02 by antferna          #+#    #+#             */
/*   Updated: 2024/06/14 14:37:37 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("name"),  _signed(false), _gradeToSign(150), _gradeToExec(150){}

AForm::AForm(const std::string &name, int gradeToSign, int gradeToExec) : _name(name),  _signed(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec){
    if(gradeToSign < 1)
        throw AForm::GradeTooHighException();
    else if(gradeToSign > 150)
        throw AForm::GradeTooLowException();    
}

AForm::AForm(const AForm& other) : _name(other.getName()), _gradeToSign(other.getGradeToSign()), _gradeToExec(other.getGradeToExec()){}

AForm::~AForm(){}

AForm& AForm::operator=(const AForm& other){
    if(this != &other){
        _signed = other.getSigned();
    }
    return *this;
}

std::string AForm::getName() const{
    return _name;
}

bool AForm::getSigned() const{
    return _signed;
}

int AForm::getGradeToSign() const{
    return _gradeToSign;
}

int AForm::getGradeToExec() const{
    return _gradeToExec;
}

void AForm::beSigned(const Bureaucrat& bureaucrat){
    if(bureaucrat.getGrade() > _gradeToSign)
        throw AForm::GradeTooLowException();
    _signed = true;    
}

std::ostream& operator<<(std::ostream& o, const AForm& form){
    o << "------------ Form Info ------------" << std::endl
    << "Form name: " << form.getName() << std::endl
    << "Grade to sign: " << form.getGradeToSign() << std::endl
    << "Grade to execute: " << form.getGradeToExec() << std::endl
    << "Is signed: ";
    if(form.getSigned() == true)
        o << "True" << std::endl;
    else
        o << "False" << std::endl;
    return o;
}