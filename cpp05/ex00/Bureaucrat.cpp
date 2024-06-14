/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:42:18 by antferna          #+#    #+#             */
/*   Updated: 2024/06/14 14:32:41 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default name"), _grade(150){}


Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name), _grade(grade){
    if(grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), _grade(other._grade){}

Bureaucrat::~Bureaucrat(){}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other){
    if(this != &other){
        this->_grade = other._grade;
    }
    return *this;
}

std::string Bureaucrat::getName()const{
    return this->_name;
}
int Bureaucrat::getGrade()const{
    return this->_grade;
}

void Bureaucrat::incrementGrade(){
    if(_grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    --_grade;
}

void Bureaucrat::decrementGrade(){
    if(_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    ++_grade;
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& b){
    o << b.getName() << ", bureaucrat grade " << b.getGrade();
    return o;
}
