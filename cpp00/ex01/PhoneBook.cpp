/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:53:09 by antferna          #+#    #+#             */
/*   Updated: 2024/05/24 15:03:36 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <limits>

PhoneBook::PhoneBook() : _contactCount(0) {
    std::cout << "Welcome, this is my PhoneBook" << std::endl << std::endl;
    std::cout << "----------How to use------------" << std::endl;
    this->init();
}

PhoneBook::~PhoneBook() {}

void PhoneBook::init() {
    std::cout << std::endl;
    std::cout << "Type ADD: To add a new contact" << std::endl;
    std::cout << "Type SEARCH: To search for a contact" << std::endl;
    std::cout << "Type EXIT: To exit the program" << std::endl << std::endl;

    std::string input;
    while (true) {
        std::cout << "> " << std::flush;
        std::getline(std::cin, input);

        if (input == "EXIT") {
            break;
        } else if (input == "ADD") {
            this->addContact();
        } else if (input == "SEARCH") {
            this->printContacts();
            this->search();
        } else if (!input.empty()) {
            std::cout << "Invalid command. Please type ADD, SEARCH, or EXIT." << std::endl;
        }

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
}

void PhoneBook::addContact() {
    if (_contactCount >= 8) {
        _contactCount = 0; // Overwrite the oldest contact
    }
    _contacts[_contactCount].init();
    _contacts[_contactCount].set_index(_contactCount);
    _contactCount++;
}

void PhoneBook::printContacts() {
    std::cout << "|I|First Name|Last Name |Nick Name |" << std::endl;
    for (int i = 0; i < 8; i++) {
        _contacts[i].view();
    }
}

void PhoneBook::search() {
    if (_contactCount == 0){
        std::cout << std::endl << "Contact list empty" << std::endl;
        return ;
    }
    int index = -1;
    bool valid = false;
    do {
        std::cout << "Select index: " << std::flush;
        std::cin >> index;
        if (std::cin.good() && index >= 0 && index < 8 && (!_contacts[index].get_firstName().empty() || !_contacts[index].get_lastName().empty() || !_contacts[index].get_nickName().empty())) {
            valid = true;
        } else {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid index, try again." << std::endl;
        }
    } while (!valid);
    _contacts[index].full_view();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

Contact PhoneBook::get_contact(int index) {
    return _contacts[index];
}
