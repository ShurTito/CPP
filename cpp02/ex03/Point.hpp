/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 13:10:34 by antferna          #+#    #+#             */
/*   Updated: 2024/06/03 12:06:57 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
    const Fixed x;
    const Fixed y;
    
public:
    Point();
    Point(const float x, const float y);
    Point(const Point &other);
    Point& operator=(const Point &other);
    ~Point();

    Fixed getX() const;
    Fixed getY() const;
};

#endif