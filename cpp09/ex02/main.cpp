/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:48:29 by antferna          #+#    #+#             */
/*   Updated: 2024/07/31 12:29:00 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <ctime>


int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " num1 num2 num3 ..." << std::endl;
        return 1;
    }

    PmergeMe pm(argv);

    // Mostrar la secuencia original
    std::cout << "Before: ";
    pm.printVector();
    std::cout << std::endl;

    // Medir el tiempo para mergeVector
    std::clock_t start_vector = std::clock();
    pm.mergeVector();
    std::clock_t end_vector = std::clock();
    double elapsed_vector = double(end_vector - start_vector) / CLOCKS_PER_SEC;

    // Mostrar la secuencia ordenada del vector
    std::cout << "After: ";
    pm.printVector();
    std::cout << std::endl;

   
    // Medir el tiempo para mergeList
    std::clock_t start_list = std::clock();
    pm.mergeList();
    std::clock_t end_list = std::clock();
    double elapsed_list = double(end_list - start_list) / CLOCKS_PER_SEC;

    // Mostrar los tiempos de ejecución
    std::cout << "Time to process a range of " << pm.getSize() << " elements with std::vector : " << elapsed_vector << " seconds" << std::endl;
    std::cout << "Time to process a range of " << pm.getSize() << " elements with std::list : " << elapsed_list << " seconds" << std::endl;

    return 0;
}