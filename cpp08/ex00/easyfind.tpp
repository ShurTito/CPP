/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 12:55:35 by antferna          #+#    #+#             */
/*   Updated: 2024/07/08 11:36:22 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

class ValueNotFoundException: public std::exception{
    public:
        const char *what() const throw(){
            return ("Value not found");
        }
};

template <typename T>
void easyfind(T&cont, int value){
    typename T::iterator i;
    i = std::find(cont.begin(), cont.end(), value);
    if(i == cont.end())
        throw (ValueNotFoundException());
    std::cout << "Value " << value << " found in position " <<  std::distance(cont.begin(), i) << "\n";
}