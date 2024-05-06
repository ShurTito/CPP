/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:47:00 by antferna          #+#    #+#             */
/*   Updated: 2024/05/06 17:08:36 by antferna         ###   ########.fr       */
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

void	Contact::init(void){
	std::cin.ignore();
	this->_fistName = this->_getInput("Please enter you first name: ");
	this->_lastName = this->_getInput("Please enter you last name: ");
	this->_nickName = this->_getInput("Please enter you nick name: ");
	this->_phoneNumber = this->_getInput("Please enter you phone number: ");
	this->_darkestSecret = this->_getInput("Please enter you darkest secret: ");
}