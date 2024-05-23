/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:47:00 by antferna          #+#    #+#             */
/*   Updated: 2024/05/23 13:43:03 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){}
Contact::~Contact(){}

std::string Contact::_getInput(std::string str){
	std::string input = "";
	bool		valid = false;
	do
	{
		std::cout << str << std::flush;
		std::getline(std::cin, input);
		if(std::cin.good() && !input.empty())
			valid = true;
		else{
			std::cin.clear();
			std::cout << "Invalid input, try again." << std::endl;
		}
	} while (!valid);
	return(input);
}

std::string Contact::get_firstName(){
	return this->_firstName;
}

void Contact::set_firstName(std::string _firstName){
	this->_firstName = _firstName;
}

std::string Contact::get_lastName(){
	return this->_lastName;
}

void Contact::set_lastName(std::string _lastName){
	this->_lastName = _lastName;
}

std::string Contact::get_nickName(){
	return this->_nickName;
}

void Contact::set_nickName(std::string _nickName){
	this->_nickName = _nickName;
}

std::string Contact::get_phoneNumber(){
	return this->_phoneNumber;
}

void Contact::set_phoneNumber(std::string _phoneNumber){
	this->_phoneNumber = _phoneNumber;
}

std::string Contact::get_darkestSecret(){
	return this->_darkestSecret;
}

void Contact::set_darkestSecret(std::string _darkestSecret){
	this->_darkestSecret = _darkestSecret;
}

int Contact::get_index(){
	return this->_index;
}

void Contact::set_index(int _index){
	this->_index = _index;
}
	
void	Contact::init(void){
	this->set_firstName(Contact::_getInput("Please enter you first name: "));
	this->set_lastName(Contact::_getInput("Please enter you last name: "));
	this->set_nickName(Contact::_getInput("Please enter you nick name: "));
	this->set_phoneNumber(Contact::_getInput("Please enter you phone number: "));
	this->set_darkestSecret(Contact::_getInput("Please enter you darkest secret: "));
}

std::string	Contact::get_ten_len(std::string s){
	 std::string res;
    if (s.length() == 10) {
        res = s;
    } else if (s.length() < 10) {
        res = std::string(10 - s.length(), ' ') + s; 
    } else {
        res = s.substr(0, 9) + ".";
    }
    return res;
}

void	Contact::view(int index){
	(void) index;
	std::cout << "|" << this->get_index() << "|" << Contact::get_ten_len(this->get_firstName()) << "|" << Contact::get_ten_len(this->get_lastName()) << "|" << Contact::get_ten_len(this->get_nickName()) << "|" << std::endl;
}

void	Contact::full_view()
{
	std::cout << "First name: " << this->get_firstName() << std::endl;
	std::cout << "Last name: " << this->get_lastName() << std::endl;
	std::cout << "Nick name: " << this->get_nickName() << std::endl;
	std::cout << "Phone number: " << this->get_phoneNumber() << std::endl;
	std::cout << "Darkest secret: " << this->get_darkestSecret() << std::endl;
}