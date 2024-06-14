/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:57:27 by antferna          #+#    #+#             */
/*   Updated: 2024/06/14 14:48:32 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
    const std::string   _name;
    bool                _signed;
    const int           _gradeToSign;
    const int           _gradeToExec;
public:
    AForm();
    AForm(const std::string &name, int gradeToSign, int gradeToExec);
    AForm(const AForm& other);
    ~AForm();
    AForm &operator=(const AForm& other);
    
    std::string getName() const;
    bool        getSigned() const;
    int         getGradeToSign() const;
    int         getGradeToExec() const;

    void        beSigned(const Bureaucrat &bureaucrat);
    virtual void execute(const Bureaucrat& executor)const = 0;

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

    class NotSignedException : public std::exception{
        public:
        virtual const char* what() const throw(){
            return "Form not signed";
        }
    };
};

std::ostream& operator<<(std::ostream& o, const AForm& form);


#endif