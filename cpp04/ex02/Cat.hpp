/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 12:04:20 by antferna          #+#    #+#             */
/*   Updated: 2024/06/05 13:48:45 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"

class Cat : public AAnimal{
private:
    Brain* _brain;
public:
    Cat();
    Cat(const Cat& other);
    Cat& operator=(const Cat& other);
    ~Cat();
    void makeSound() const;
};

#endif