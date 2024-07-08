/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:16:13 by antferna          #+#    #+#             */
/*   Updated: 2024/07/08 12:49:01 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <list>
#include <climits>



class Span{
private:
    unsigned int    _size;
    std::list<int>  _list;
    Span();

public:
    Span(unsigned int N);
    Span(const Span &other);
    Span &operator=(const Span &other);
    ~Span();
    
    void addNumber(int n);
    void addNumber(std::list<int>::const_iterator first, std::list<int>::const_iterator last);
    unsigned int shortestSpan();
    unsigned int longestSpan();

    void printList();
    
    class SpanFullException : public std::exception{
        const char *what() const throw();
    };
    
    class SpanEmptyException : public std::exception{
        const char *what() const throw();
    };
};


