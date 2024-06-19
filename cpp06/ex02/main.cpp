/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 13:59:42 by antferna          #+#    #+#             */
/*   Updated: 2024/06/19 15:09:25 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <iostream>
#include <cstdlib>

Base *generate(void){
    switch (std::rand() % 3)
    {
    case 0:
        return (new A());
    
    case 1:
        return (new B());

    case 2:
        return (new C());
    default:
        return NULL;
    }
}

void identify(Base *p){
    if(dynamic_cast<A*>(p))
        std::cout << "Type class A\n";
    else if(dynamic_cast<B*>(p))
        std::cout << "Type class B\n";
    else if(dynamic_cast<C*>(p))
        std::cout << "Type class C\n";
    else
        std::cout << "Type class Unknown\n";
}

void identify(Base &p){
    try{
        A &a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "Type class A\n";
    }catch(std::exception &e){
        try{
            B &b = dynamic_cast<B&>(p);
            (void)b;
            std::cout << "Type class B\n";
        }
        catch(const std::exception& e)
        {
            try{
                C &c = dynamic_cast<C&>(p);
                (void)c;
                std::cout << "Type class C\n";
            }
            catch(const std::exception& e)
            {
                std::cout << "Type class Unknown\n";
            }   
        }
        
    }
}


int main(){
    
    Base *base;
    std::srand(std::time(NULL));
    base = generate();
    identify(base);
    identify(*base);

    delete base;
    
    return 0;
}