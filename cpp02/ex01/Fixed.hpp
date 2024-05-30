/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 17:20:53 by antferna          #+#    #+#             */
/*   Updated: 2024/05/30 11:48:07 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int                 _value;
    static const int    _fractionalBits = 8;
public:
    Fixed();
    Fixed(const Fixed &);
    Fixed(const int value);
    Fixed(const float value);
    Fixed& operator=(const Fixed &);
    ~Fixed();
    
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
    
};

std::ostream& operator<<(std::ostream & os, const Fixed & fixed);


#endif