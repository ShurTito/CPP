/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:57:27 by antferna          #+#    #+#             */
/*   Updated: 2024/06/14 14:34:11 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    const std::string   _name;
    bool                _signed;
    const int           _gradeToSign;
    const int           _gradeToExec;
public:
    Form();
    Form(const std::string &name, int gradeToSign, int gradeToExec);
    Form(const Form& other);
    ~Form();
    Form &operator=(const Form& other);
    
    std::string getName() const;
    bool        getSigned() const;
    int         getGradeToSign() const;
    int         getGradeToExec() const;

    void        beSigned(const Bureaucrat &bureaucrat);

    class GradeTooHighException : public std::exception{
        public:
        virtual const char* what() const throw(){
            return "Grade is too hight!";
        }
    };

    class GradeTooLowException : public std::exception{
        public:
        virtual const char* what() const throw(){
            return "Grade is too low!";
        }
    };
};

std::ostream& operator<<(std::ostream& o, const Form& form);


#endif