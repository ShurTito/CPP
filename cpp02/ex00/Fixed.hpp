/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 17:20:53 by antferna          #+#    #+#             */
/*   Updated: 2024/05/29 17:52:29 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int                 _value;
    static const int    _fractionalBits = 8;
public:
    Fixed();
    Fixed(const Fixed&);
    Fixed& operator=(const Fixed&);
    ~Fixed();
    
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};




#endif