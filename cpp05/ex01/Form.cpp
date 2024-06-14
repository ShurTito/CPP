/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:57:02 by antferna          #+#    #+#             */
/*   Updated: 2024/06/14 14:35:06 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("name"),  _signed(false), _gradeToSign(150), _gradeToExec(150){}

Form::Form(const std::string &name, int gradeToSign, int gradeToExec) : _name(name),  _signed(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec){
    if(gradeToSign < 1)
        throw Form::GradeTooHighException();
    else if(gradeToSign > 150)
        throw Form::GradeTooLowException();    
}

Form::Form(const Form& other) : _name(other.getName()), _gradeToSign(other.getGradeToSign()), _gradeToExec(other.getGradeToExec()){}

Form::~Form(){}

Form& Form::operator=(const Form& other){
    if(this != &other){
        _signed = other.getSigned();
    }
    return *this;
}

std::string Form::getName() const{
    return _name;
}

bool Form::getSigned() const{
    return _signed;
}

int Form::getGradeToSign() const{
    return _gradeToSign;
}

int Form::getGradeToExec() const{
    return _gradeToExec;
}

void Form::beSigned(const Bureaucrat& bureaucrat){
    if(bureaucrat.getGrade() > _gradeToSign)
        throw Form::GradeTooLowException();
    _signed = true;    
}

std::ostream& operator<<(std::ostream& o, const Form& form){
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