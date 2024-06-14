/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:42:09 by antferna          #+#    #+#             */
/*   Updated: 2024/06/14 14:33:45 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
    const std::string   _name;
    int                 _grade;
    
public:
    Bureaucrat();
    Bureaucrat(const std::string& name, int grade);
    Bureaucrat(const Bureaucrat& other);
    ~Bureaucrat();
    Bureaucrat &operator=(const Bureaucrat& other);

    std::string     getName() const;
    int             getGrade() const;
    void            incrementGrade();
    void            decrementGrade();

    void            signForm(Form& form);

    class GradeTooHighException : public std::exception{
        public:
        virtual const char* what() const throw(){
            return "Grade is too hight! Maximum grade is 1.";
        }
    };

    class GradeTooLowException : public std::exception{
        public:
        virtual const char* what() const throw(){
            return "Grade is too low! Minimum grade in 150.";
        }
    };
};



std::ostream& operator<<(std::ostream& o, const Bureaucrat& b);


#endif