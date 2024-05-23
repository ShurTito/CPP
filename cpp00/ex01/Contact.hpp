/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:34:44 by antferna          #+#    #+#             */
/*   Updated: 2024/05/23 13:25:00 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact{
private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _phoneNumber;
	std::string _darkestSecret;
	int _index;

	std::string _getInput(std::string str);

	

public:
	Contact();
	~Contact();
	void		init(void);
	void		view(int index);
	void		full_view();
	std::string	get_ten_len(std::string s);
	
	std::string get_firstName();
	void set_firstName(std::string _firstName);
	std::string get_lastName();
	void set_lastName(std::string _lastName);
	std::string get_nickName();
	void set_nickName(std::string _nickName);
	std::string get_phoneNumber();
	void set_phoneNumber(std::string _phoneNumber);
	std::string get_darkestSecret();
	void set_darkestSecret(std::string _darkestSecret);
	int get_index();
	void set_index(int _index);
};

#endif