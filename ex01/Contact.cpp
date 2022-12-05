/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhakypo <szhakypo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:16:46 by szhakypo          #+#    #+#             */
/*   Updated: 2022/12/05 15:34:37 by szhakypo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>
#include "Contact.hpp"

void Contact::createContact()
{
	std :: cout << "Enter first name: ";
	std :: cin >> first_name;

	std :: cout << "Enter last name: ";
	std :: cin >> last_name;

	std :: cout << "Enter nickname: ";
	std :: cin >> nik;

	std :: cout << "Enter phone number: ";
	std :: cin >> phone_number;

	std :: cout << "Enter darkest secret ";
	std :: cin >> darkest_secret;
}

void	Contact :: printContactByAtribute()
{
	std::string FirstName;
	std::string LastName;
	std::string NickName;
	std::string PhoneNumber;
	std::string DarkestSecret;
	
	FirstName = getFirstName();
	LastName = getLastName();
	NickName = getNik();
	PhoneNumber = getPhoneNumber();
	DarkestSecret = getDarkestSecret();
	

	std::cout<< "|" << std::setw(10) << FirstName << "|";
	std::cout << std::setw(10) << LastName << "|";
	std::cout << std::setw(10) << NickName << "|";
	std::cout << std::setw(10) << PhoneNumber << "|";
	std::cout << std::setw(10) << DarkestSecret << "|";
	std::cout << std::endl;
}

std :: string Contact::getFirstName()
{
	return (first_name);
}

std :: string Contact::getLastName()
{
	return (last_name);
}

std :: string Contact::getNik()
{
	return (nik);
}

std :: string Contact::getPhoneNumber()
{
	return (phone_number);
}

std :: string Contact::getDarkestSecret()
{
	return (darkest_secret);
}
