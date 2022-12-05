/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhakypo <szhakypo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:17:13 by szhakypo          #+#    #+#             */
/*   Updated: 2022/12/05 20:40:46 by szhakypo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook :: PhoneBook()
{
	index = 0;
	get_info();
}

PhoneBook :: ~PhoneBook()
{

}

void	PhoneBook :: addContact()
{
	contacts[index].createContact();
	index++;
	if (index == 8)
		index = 0;
}

void PhoneBook :: get_info()
{
	std::cout	<< "+-------------------------------------------------------+\n"
				<< "|                  WELCOME TO PHONEBOOK                 |\n"
				<< "+-------------------------------------------------------+\n"
				<< "|                                                       |\n"
				<< "|     ADD     -   Add Contact	                        |\n"
				<< "|                                                       |\n"
				<< "|     SEARCH  -   Find Contact	                        |\n"
				<< "|                                                       |\n"
				<< "|     EXIT    -   Exit from PhoneBook	                |\n"
				<< "|                                                       |\n"
				<< "+-------------------------------------------------------+\n";
}

void	PhoneBook :: searchContact()
{
	printHeader();
	if ((index == 0) && contacts[1].getFirstName().empty() == true)
	{
		std :: cout << "|           PhoneBook is empty              |" << std::endl;
		std :: cout << "+----------+----------+----------+----------+" << std :: endl;
		return ;
	}
	int i = 0;
	std :: string str;
	printcontacts(0);
	std :: cout << "Enter index of contact: " << std :: endl;
	getline(std::cin, str);
	i = atoi(str.c_str());
	if (i > 0 && i < 9 && i <= index)
		contacts[i - 1].printContactByAtribute();
	else
		std::cout << "Wrong index" << std::endl;
}


void PhoneBook::printHeader()
{
	std :: cout << "+----------+----------+----------+----------+" << std :: endl;
	std :: cout << "|   Index  |First name| Last name| Nickname |" << std :: endl;
	std :: cout << "+----------+----------+----------+----------+" << std :: endl;
}

void	PhoneBook :: printcontacts(int num)
{
	std :: string FirstName;
	std :: string LastName;
	std :: string NickName;
	int		i = num;
	FirstName = contacts[i].getFirstName();
	LastName = contacts[i].getLastName();
	NickName = contacts[i].getNik();
	std :: cout << "|         " << i + 1 << "|";
	if (FirstName.length() > 10)
		std :: cout << FirstName.substr(0, 9) << "." << "|";
	else
		std :: cout << std :: setw(10) << FirstName << "|";
	if (LastName.length() > 10)
		std :: cout << LastName.substr(0, 9) << "." << "|";
	else
		std :: cout << std :: setw(10) << LastName << "|";
	if (NickName.length() > 10)
		std :: cout << NickName.substr(0, 9) << "." << "|";
	else
		std :: cout << std :: setw(10) << NickName << "|";
	std :: cout << std :: endl;
	std :: cout << "+----------+----------+----------+----------+" << std :: endl;
	if (i > index)
	{
		i = 0;		
		printcontacts(i);
	}
	else if (i < index)
	{
		printcontacts(i + 1);
	}
	else
		return ;
}
