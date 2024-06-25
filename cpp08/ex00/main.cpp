/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 13:04:33 by antferna          #+#    #+#             */
/*   Updated: 2024/06/25 13:25:57 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void){
    try{
        std::vector<int> cont;

        cont.push_back(1);
        cont.push_back(5);
        cont.push_back(7);
        cont.push_back(2);
        cont.push_back(42);
        cont.push_back(5);
        cont.push_back(8);
		
        easyfind(cont, 2);
        easyfind(cont, 42);
        easyfind(cont, 1);
        easyfind(cont, 8);
        easyfind(cont, 24);

    }catch(const std::exception& e){
        std::cerr << e.what() << "\n";
    }
    return 0;
}