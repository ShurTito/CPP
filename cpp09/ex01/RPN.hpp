/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:09:57 by antferna          #+#    #+#             */
/*   Updated: 2024/07/30 12:18:57 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stack>

class RPN
{
private:
    std::stack<int> _stack;
public:
    RPN();
    RPN(const std::string &str);
    RPN(const RPN &other);
    ~RPN();
    RPN &operator=(const RPN &other);
    void calculate(char c);
};