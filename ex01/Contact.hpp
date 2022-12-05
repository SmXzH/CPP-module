/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhakypo <szhakypo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:16:58 by szhakypo          #+#    #+#             */
/*   Updated: 2022/12/05 15:07:07 by szhakypo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <stdlib.h>
//#include "PhoneBook.hpp"

class Contact
{
private:
	std::string first_name;
	std::string last_name;
	std::string nik;
	std::string	phone_number;
	std::string darkest_secret;
public:
	Contact() {}
	~Contact() {}

	void	createContact();
	void	printContactByAtribute();
	std :: string getFirstName();
	std :: string getLastName();
	std :: string getNik();
	std :: string getPhoneNumber();
	std :: string getDarkestSecret();
};

#endif