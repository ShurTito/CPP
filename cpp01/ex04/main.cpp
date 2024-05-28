/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:16:08 by antferna          #+#    #+#             */
/*   Updated: 2024/05/28 17:00:14 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int argc, char **argv)
{
    if(argc == 4){
        std::string filename = argv[1];
        std::string s1 = argv[2];
        std::string s2 = argv[3];
        if(s1.empty()){
            std::cout << "Error: The string to replace (s1) cannot be empty." << std::endl;
            return 1;
        }         
        if(!Replace::replace(filename, s1, s2))
            return 1;
    }else{
        std::cout << "Usage: " << argv[0] << " <file> <find> <replace>" << std::endl;
    }
    return 0;
}