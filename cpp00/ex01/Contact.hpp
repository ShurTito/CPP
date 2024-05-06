/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:34:44 by antferna          #+#    #+#             */
/*   Updated: 2024/05/06 16:49:36 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact{
private:
	std::string _fistName;
	std::string _lastName;
	std::string _nickName;
	std::string _phoneNumber;
	std::string _darkestSecret;
	int			_index;

	std::string _printLen(std::string str);
	std::string _getInput(std::string str);
	
	
public:
	Contact();
	~Contact();
	void	init(void);
	void	view(int index);
	void	display(int index);
	void	setIndex(int i);
};

#endif