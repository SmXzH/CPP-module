/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhakypo <szhakypo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:17:26 by szhakypo          #+#    #+#             */
/*   Updated: 2022/12/05 17:21:48 by szhakypo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include "Contact.hpp"

class PhoneBook
{
	private:
		int		index;
		void	get_info();
		Contact	contacts[8];
		void	printHeader();
		void	printcontacts(int num);
	public:
		PhoneBook();
		~PhoneBook();
	
		void	addContact();
		void	searchContact();
};

#endif