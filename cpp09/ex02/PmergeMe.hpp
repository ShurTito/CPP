/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:48:13 by antferna          #+#    #+#             */
/*   Updated: 2024/07/31 12:25:47 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <list>
#include <climits>

class PmergeMe
{
private:
    std::vector<int>    _vector;
    std::list<int>      _list;
    int                 _size;  
public:
    PmergeMe();
    PmergeMe(char **av);
    PmergeMe(const PmergeMe &other);
    ~PmergeMe();
    PmergeMe &operator=(const PmergeMe &other);
    
    int     getSize() const;
    void    printVector();
    void    printList();
    void    mergeVector();
    void    mergeList();

};
