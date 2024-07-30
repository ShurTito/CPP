/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:10:00 by antferna          #+#    #+#             */
/*   Updated: 2024/07/30 12:30:06 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const std::string &str){
    for (size_t i = 0; i < str.length(); i++)
    {
        if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
            calculate(str[i]);
        else if (str[i] >= '0' && str[i] <= '9')
            _stack.push(str[i] - '0');
        else if(str[i] != ' ')
            throw std::invalid_argument("Invalid character in string");
    }
    if (_stack.size() != 1)
        throw std::invalid_argument("Invalid string");
    std::cout << _stack.top() << std::endl;
}

RPN::RPN(const RPN &other){
    *this = other;
}

RPN::~RPN() {}

RPN &RPN::operator=(const RPN &other){
    if (this != &other)
        _stack = other._stack;    
    return *this;
}

void RPN::calculate(char c){
    if (_stack.size() < 2)
        throw std::invalid_argument("Not enough numbers in stack");
    int a = _stack.top();
    _stack.pop();
    int b = _stack.top();
    _stack.pop();
    switch (c)
    {
    case '+':
        _stack.push(b + a);
        break;
    case '-':
        _stack.push(b - a);
        break;
    case '*':
        _stack.push(b * a);
        break;
    case '/':
        if(a == 0)
            throw std::invalid_argument("Division by zero");
        _stack.push(b / a);
        break;
    default:
        break;
    }        
}