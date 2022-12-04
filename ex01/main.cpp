
#include <iostream>
#include <iomanip>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
	PhoneBook phonebook;
	std::string input;

	while (1)
	{
		std :: cout << "Enter ADD, SEARCH or EXIT: ";
		std:: cin >> input;
			if(input == "ADD")
			{
				phonebook.addContact();
			}
			else if (input == "SEARCH")
			{
				phonebook.searchContact();
			}
			else if (input == "EXIT")
				break;
		clearerr(stdin);
		std::cin.clear();	
	}
	
	return (0);
}