/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:47:00 by antferna          #+#    #+#             */
/*   Updated: 2024/05/24 15:15:04 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() : _index(-1) {}
Contact::~Contact() {}

std::string Contact::_getInput(const std::string& prompt) {
    std::string input;
    while (true) {
        std::cout << prompt;
        std::getline(std::cin, input);
        if (!input.empty())
            break;
        std::cin.clear();
        std::cout << "Invalid input, try again." << std::endl;
    }
    return input;
}

void Contact::init() {
    _firstName = _getInput("Please enter your first name: ");
    _lastName = _getInput("Please enter your last name: ");
    _nickName = _getInput("Please enter your nick name: ");
    _phoneNumber = _getInput("Please enter your phone number: ");
    _darkestSecret = _getInput("Please enter your darkest secret: ");
    std::cout << "Added contact successfully" << std::endl << std::endl;
}

std::string Contact::get_firstName() {
    return _firstName;
}

void Contact::set_firstName(const std::string& firstName) {
    _firstName = firstName;
}

std::string Contact::get_lastName() {
    return _lastName;
}

void Contact::set_lastName(const std::string& lastName) {
    _lastName = lastName;
}

std::string Contact::get_nickName() {
    return _nickName;
}

void Contact::set_nickName(const std::string& nickName) {
    _nickName = nickName;
}

std::string Contact::get_phoneNumber() {
    return _phoneNumber;
}

void Contact::set_phoneNumber(const std::string& phoneNumber) {
    _phoneNumber = phoneNumber;
}

std::string Contact::get_darkestSecret() {
    return _darkestSecret;
}

void Contact::set_darkestSecret(const std::string& darkestSecret) {
    _darkestSecret = darkestSecret;
}

int Contact::get_index() {
    return _index;
}

void Contact::set_index(int index) {
    _index = index;
}

std::string Contact::get_ten_len(const std::string& s) {
    if (s.length() == 10) {
        return s;
    } else if (s.length() < 10) {
        return std::string(10 - s.length(), ' ') + s;
    } else {
        return s.substr(0, 9) + ".";
    }
}

void Contact::view() {
    if (_firstName.empty() && _lastName.empty() && _nickName.empty())
        return;
    std::cout << "|" << _index << "|" 
              << get_ten_len(_firstName) << "|" 
              << get_ten_len(_lastName) << "|" 
              << get_ten_len(_nickName) << "|" 
              << std::endl;
}

void Contact::full_view() {
    std::cout << "First name: " << _firstName << std::endl;
    std::cout << "Last name: " << _lastName << std::endl;
    std::cout << "Nick name: " << _nickName << std::endl;
    std::cout << "Phone number: " << _phoneNumber << std::endl;
    std::cout << "Darkest secret: " << _darkestSecret << std::endl << std::endl;
}
