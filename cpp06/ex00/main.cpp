/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:33:13 by antferna          #+#    #+#             */
/*   Updated: 2024/06/19 12:56:42 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv){
    if(argc != 2){
        std::cout << "Usage: ./converter [something to convert]\n";
        return 1;
    }
    ScalarConverter::convert(argv[1]);
    return 0;
}