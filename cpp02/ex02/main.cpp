/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 17:20:33 by antferna          #+#    #+#             */
/*   Updated: 2024/05/30 13:03:13 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
    Fixed a(42);
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << "Max -> " << Fixed::max( a, b ) << std::endl;
    std::cout << "Min -> " << Fixed::min( a, b ) << std::endl;
    std::cout << "a + b -> " << a + b << std::endl;
    std::cout << "a - b -> " << a - b << std::endl;
    std::cout << "a * b -> " << a * b << std::endl;
    std::cout << "a / b -> " << a / b << std::endl;
    std::cout << "a != b -> " << (a != b) << std::endl;
    std::cout << "a == b -> " << (a == b) << std::endl;
    a = b;
    std::cout << "a != b -> " << (a != b) << std::endl;
    std::cout << "a == b -> " << (a == b) << std::endl;

    return 0;
}