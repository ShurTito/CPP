/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:48:29 by antferna          #+#    #+#             */
/*   Updated: 2024/07/30 14:50:41 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <ctime>


int main(int ac, char **av){
    PmergeMe pmm(av);
    (void) ac;
    
    std::cout << "Lista original: ";
    
    pmm.printVector();

    pmm.mergeVector();

    std::cout << "Lista ordenada: ";
    pmm.printVector();

    return 0;
}