/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:36:10 by antferna          #+#    #+#             */
/*   Updated: 2024/05/23 13:48:31 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int main(void){
	//Phonebook mybook;
	Contact c;
	c.init();
	c.set_index(0);
	c.view(0);
	c.full_view();
	
}