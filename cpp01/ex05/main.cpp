/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:39:57 by antferna          #+#    #+#             */
/*   Updated: 2024/05/29 11:59:10 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
    Harl harl;

    std::cout << "Testing DEBUG level:" << std::endl;
    harl.complain("DEBUG");

    std::cout << "\nTesting INFO level:" << std::endl;
    harl.complain("INFO");

    std::cout << "\nTesting WARNING level:" << std::endl;
    harl.complain("WARNING");

    std::cout << "\nTesting ERROR level:" << std::endl;
    harl.complain("ERROR");

    std::cout << "\nTesting invalid level:" << std::endl;
    harl.complain("NOT_A_LEVEL");

    return 0;
}