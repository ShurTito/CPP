/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:34:44 by antferna          #+#    #+#             */
/*   Updated: 2024/05/24 15:12:12 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {
private:
    std::string _firstName;
    std::string _lastName;
    std::string _nickName;
    std::string _phoneNumber;
    std::string _darkestSecret;
    int _index;

    std::string _getInput(const std::string& prompt);

public:
    Contact();
    ~Contact();

    void init();
    void view();
    void full_view();

    std::string get_firstName();
    void set_firstName(const std::string& firstName);

    std::string get_lastName();
    void set_lastName(const std::string& lastName);

    std::string get_nickName();
    void set_nickName(const std::string& nickName);

    std::string get_phoneNumber();
    void set_phoneNumber(const std::string& phoneNumber);

    std::string get_darkestSecret();
    void set_darkestSecret(const std::string& darkestSecret);

    int get_index();
    void set_index(int index);

    static std::string get_ten_len(const std::string& s);
};

#endif
