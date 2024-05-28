/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:16:18 by antferna          #+#    #+#             */
/*   Updated: 2024/05/28 16:54:20 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

bool Replace::replace(const std::string& filename, const std::string& s1, const std::string& s2){
    std::ifstream inputFile(filename.c_str());
    if(!inputFile.is_open()){
        std::cout << "Error: Could not open file " << filename << std::endl;
        return false;
    }
    std::string newFile = filename + ".replace";
    std::ofstream outputFile(newFile.c_str());
    if(!outputFile.is_open()){
        std::cout << "Error: Could not create file " << newFile << std::endl;
        inputFile.close();
        return false;
    }
    std::string line;
    size_t pos;
    while (std::getline(inputFile, line)){
        pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos += s2.length();
        }
        outputFile << line << std::endl;
    }
    inputFile.close();
    outputFile.close();
    return true;
}

