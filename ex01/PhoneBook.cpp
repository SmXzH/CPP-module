/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhakypo <szhakypo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:17:13 by szhakypo          #+#    #+#             */
/*   Updated: 2022/12/04 23:24:02 by szhakypo         ###   ########.fr       */
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
	if(index != 0)
		printcontacts();
}

void PhoneBook::printHeader()
{
	std :: cout << "+----------+----------+----------+----------+" << std :: endl;
	std :: cout << "|     Index|First name| Last name|  Nickname|" << std :: endl;
	std :: cout << "+----------+----------+----------+----------+" << std :: endl;
}

void	PhoneBook::printcontacts()
{
	str :: string FirstName;
	str :: str
	std:: cout << "|" << setw() << str
}
