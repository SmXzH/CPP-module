/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhakypo <szhakypo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:16:46 by szhakypo          #+#    #+#             */
/*   Updated: 2022/12/06 18:04:12 by szhakypo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>
#include "Contact.hpp"

void Contact::createContact()
{
	std :: cout << "Enter first name: ";
	while (first_name.empty() == true)
	{
		getline(std::cin, first_name);
		if (first_name.empty() == true)
		{
			std :: cout << "First name can't be empty" << std :: endl;
			std :: cout << "Enter first name: ";
		}
	}
	std :: cout << "Enter last name: ";
	while (last_name.empty() == true)
	{
		getline(std::cin, last_name);
		if (last_name.empty() == true)
		{
			std :: cout << "First last can't be empty" << std :: endl;
			std :: cout << "Enter last name: ";
		}
	}
	std :: cout << "Enter nickname: ";
	while (nik.empty() == true)
	{
		getline(std::cin, nik);
		if (nik.empty() == true)
		{
			std :: cout << "Nickname can't be empty" << std :: endl;
			std :: cout << "Enter nickname : ";
		}
	}
	std :: cout << "Enter phone number: ";
	while (phone_number.empty() == true)
	{
		getline(std::cin, phone_number);
		if (phone_number.empty() == true)
		{
			std :: cout << "Phone number can't be empty" << std :: endl;
			std :: cout << "Enter first name: ";
		}
	}
	std :: cout << "Enter darkest secret ";
	while (darkest_secret.empty() == true)
	{
		getline(std::cin, darkest_secret);
		if (darkest_secret.empty() == true)
		{
			std :: cout << "Darkest secret can't be empty" << std :: endl;
			std :: cout << "Darkest secret: ";
		}
	}
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
