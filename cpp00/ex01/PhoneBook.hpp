/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:53:14 by antferna          #+#    #+#             */
/*   Updated: 2024/05/24 14:57:37 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
private:
    Contact _contacts[8];
    int _contactCount;

public:
    PhoneBook();
    ~PhoneBook();

    void init();
    void addContact();
    void printContacts();
    void search();
    Contact get_contact(int index);
};

#endif
