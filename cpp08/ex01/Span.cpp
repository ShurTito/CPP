/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:15:52 by antferna          #+#    #+#             */
/*   Updated: 2024/07/08 12:49:23 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span():_size(0){}

Span::Span(unsigned int N):_size(N){}

Span::Span(const Span &other):_size(other._size), _list(other._list){}

Span &Span::operator=(const Span &other){
    if(this != &other){
        this->_size = other._size;
        this->_list = other._list;
    }
    return (*this);
}

Span::~Span(){}

void Span::addNumber(int n){
    if(this->_list.size() >= this->_size)
        throw SpanFullException();
    this->_list.push_back(n);
}

void Span::addNumber(std::list<int>::const_iterator first, std::list<int>::const_iterator last){
    if(this->_list.size() + std::distance(first, last) > this->_size)
        throw SpanFullException();
    this->_list.insert(this->_list.end(), first, last);
}

unsigned int Span::shortestSpan(){
    if(this->_list.size() <= 1)
        throw SpanEmptyException();
    std::list<int> tmp = this->_list;
    tmp.sort();
    int min = INT_MAX;
    for(std::list<int>::iterator it = tmp.begin(); it != tmp.end(); it++){
        std::list<int>::iterator next = it;
        next++;
        if(next == tmp.end())
            break;
        if(*next - *it < min)
            min = *next - *it;
    }
    return min;
}

unsigned int Span::longestSpan(){
    if(this->_list.size() <= 1)
        throw SpanEmptyException();
    std::list<int> tmp = this->_list;
    tmp.sort();
    return tmp.back() - tmp.front();
}

void Span::printList(){
    for(std::list<int>::iterator it = this->_list.begin(); it != this->_list.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
}

const char *Span::SpanFullException::what() const throw(){
    return "Span is full";
}

const char *Span::SpanEmptyException::what() const throw(){
    return "Span is empty";
}