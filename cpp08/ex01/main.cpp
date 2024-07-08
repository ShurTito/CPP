/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:15:41 by antferna          #+#    #+#             */
/*   Updated: 2024/07/08 13:21:11 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(){
    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    try{
        sp.addNumber(42);
    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    try{
        sp.printList();
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl << std::endl;
    
    Span sp2 = Span(10000);
    std::list<int> lst;
    std::srand(time(NULL));
    for(int i = 0; i < 10000; i++){
       lst.push_back(rand() % 100000);
    }
    try{
        sp2.addNumber(lst.begin(), lst.end());
    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    try{
        //sp2.printList();
        std::cout << sp2.shortestSpan() << std::endl;
        std::cout << sp2.longestSpan() << std::endl;
    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    
    return 0;
}