/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 16:51:39 by antferna          #+#    #+#             */
/*   Updated: 2024/06/05 17:22:25 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
    for (int i = 0; i < 4; i++)
        materias[i]=NULL;
}

MateriaSource::~MateriaSource(){
    for (int i = 0; i < 4; i++){
        if(materias[i])
            delete materias[i];
    }
}

MateriaSource::MateriaSource(MateriaSource const &other){
    *this = other;
}

MateriaSource & MateriaSource::operator=(MateriaSource const &other){
    if (this != &other){
        for (int i = 0; i < 4; i++)
            this->materias[i] = other.materias[i];
    }
    return *this;
}

AMateria *MateriaSource::getMateria(std::string const &type){
    for (int i = 0; i < 4; i++)
    {
        if (materias[i] && materias[i]->getType() == type)
            return materias[i];
    }
    return NULL;
    
}

void MateriaSource::learnMateria(AMateria *m){
    for (int i = 0; i < 4; i++){
        if(materias[i] == NULL){
            materias[i] = m;
            std::cout << "MateriaSource learned " << m->getType() << std::endl;
            return;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type){
    if(getMateria(type))
        return getMateria(type)->clone();
    return NULL;
}