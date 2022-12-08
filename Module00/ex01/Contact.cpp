/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhakypo <szhakypo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:16:46 by szhakypo          #+#    #+#             */
/*   Updated: 2022/12/08 16:51:57 by szhakypo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>
#include "Contact.hpp"

int	Contact::ft_digit(std::string str)
{
	int i = 0;
	int len = str.length();
	if (len < 9 || len > 11)
	{
		std::cout << "Wrong lenth of number" << std::endl;
		return (1);
	}
	while (str[i])
	{
		if (isdigit(str[i]) == 0){
			std::cout << "Number need to be digit" << std::endl;
			return(1);
		}
		i++;
	}
	return (0);
}

void Contact::createContact()
{
	std :: cout << "Enter first name: ";
	getline(std::cin, first_name);
	while (first_name.empty() == true)
	{
		if (first_name.empty() == true)
		{
			std :: cout << "First name can't be empty" << std :: endl;
			std :: cout << "Enter first name: ";
		}
		getline(std::cin, first_name);
	}
	std :: cout << "Enter last name: ";
	getline(std::cin, last_name);
	while (last_name.empty() == true)
	{
		if (last_name.empty() == true)
		{
			std :: cout << "First last can't be empty" << std :: endl;
			std :: cout << "Enter last name: ";
		}
		getline(std::cin, last_name);
	}
	std :: cout << "Enter nickname: ";
	getline(std::cin, nik);
	while (nik.empty() == true)
	{
		if (nik.empty() == true)
		{
			std :: cout << "Nickname can't be empty" << std :: endl;
			std :: cout << "Enter nickname : ";
		}
		getline(std::cin, nik);
	}
	std :: cout << "Enter phone number: ";
	getline(std::cin, phone_number);
	while(ft_digit(phone_number) == 1)
	{
		std :: cout << "Enter phone number: ";
		getline(std::cin, phone_number);
	}
	while (phone_number.empty() == true)
	{
		if (phone_number.empty() == true)
		{
			std :: cout << "Phone number can't be empty" << std :: endl;
			std :: cout << "Enter phone number: ";
		}
		getline(std::cin, phone_number);
	}
	std :: cout << "Enter darkest secret ";
	getline(std::cin, darkest_secret);
	while (darkest_secret.empty() == true)
	{
		if (darkest_secret.empty() == true)
		{
			std :: cout << "Darkest secret can't be empty" << std :: endl;
			std :: cout << "Darkest secret: ";
		}
		getline(std::cin, darkest_secret);
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
