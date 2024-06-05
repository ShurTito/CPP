/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 11:42:21 by antferna          #+#    #+#             */
/*   Updated: 2024/06/05 13:49:01 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
    //const AAnimal* x = new AAnimal();
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();

    delete j;
    delete i;

    AAnimal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };

    for (int k = 0; k < 4; k++) {
        delete animals[k];
    }

    return 0;
}