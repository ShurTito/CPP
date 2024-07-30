/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:09:55 by antferna          #+#    #+#             */
/*   Updated: 2024/07/30 12:39:34 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv){
    if (argc != 2)
    {
        std::cerr << "Usage: ./RPN \"[string]\"" << std::endl;
        return 1;
    }
    try
    {
        RPN rpn(argv[1]);
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        return 1;
    }
    return 0;
}