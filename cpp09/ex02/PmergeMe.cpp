/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:48:23 by antferna          #+#    #+#             */
/*   Updated: 2024/07/30 14:48:31 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() : _size(0){}

PmergeMe::PmergeMe(char **av) : _size(0)
{
    int value = 0;
    for (int i = 1; av[i]; i++)
    {
        value = std::atoi(av[i]);
        if(std::find(_vector.begin(), _vector.end(), value) == _vector.end() && value >= 0){
            _vector.push_back(value);
            _list.push_back(value);
            _size++;
        }
    }
}

PmergeMe::PmergeMe(const PmergeMe &other) : _vector(other._vector), _list(other._list), _size(other._size){}

PmergeMe::~PmergeMe(){}

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
    if(this != &other){
        _vector = other._vector;
        _list = other._list;
        _size = other._size;
    }
    return *this;
}

void    PmergeMe::printVector()
{
    for (std::vector<int>::iterator it = _vector.begin(); it != _vector.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
}

void    PmergeMe::printList()
{
    for (std::list<int>::iterator it = _list.begin(); it != _list.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
}

static void binartInsertVector(std::vector<int> &vector, int value)
{
    std::vector<int>::iterator it = std::lower_bound(vector.begin(), vector.end(), value);
    vector.insert(it, value);
}

void    PmergeMe::mergeVector()
{
    if(_size <= 1)
        return;
    std::vector<std::pair<int, int> > pairs;
    for (int i = 0; i < _size - 1; i += 2){
        if(_vector[i] > _vector[i + 1])
            pairs.push_back(std::make_pair(_vector[i + 1], _vector[i]));
        else
            pairs.push_back(std::make_pair(_vector[i], _vector[i + 1]));
    }
    
    if(_size % 2 != 0)
        pairs.push_back(std::make_pair(_vector[_size - 1], INT_MAX));

    std::vector<int> newVector;
    for(std::vector<std::pair<int, int> >::iterator it = pairs.begin(); it != pairs.end(); it++){
        newVector.push_back(it->first);
    }
    std::sort(newVector.begin(), newVector.end());
    for(std::vector<std::pair<int, int> >::iterator it = pairs.begin(); it != pairs.end(); it++){
        if(it->second != INT_MAX)
            binartInsertVector(newVector, it->second);
    }

    _vector = newVector;
}