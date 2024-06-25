/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 12:55:35 by antferna          #+#    #+#             */
/*   Updated: 2024/06/25 13:21:04 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
void easyfind(T&cont, int value){
    typename T::iterator i;
    i = std::find(cont.begin(), cont.end(), value);
    if(i == cont.end())
        throw (ValueNotFoundException());
    std::cout << "Value " << value << " found in position " <<  std::distance(cont.begin(), i) << "\n";
}