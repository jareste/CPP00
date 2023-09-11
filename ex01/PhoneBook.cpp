/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 20:21:06 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/11 22:58:16 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Agenda.h"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::add_contact(Contact contact)
{
	contact.add_new(&_contact[i]);
	
	if (i + 1 > 7)
		i = 0;
	else
		i++;
}

void	PhoneBook::search_contact(Contact contact)
{
	std::string	input;
	int			index;

	if (i == 0 && not_empty == 0)
	{
		std::cout << "There are no contacts to show. Please add some." << std::endl;
		return ;
	}
	not_empty = 1;
	std::cout << std::left << std::setw(10) << "# Index" << "|";
	std::cout << std::left << std::setw(10) << "First Name" << "|";
	std::cout << std::left << std::setw(10) << "Last Name" << "|";
	std::cout << std::left << std::setw(10) << "Nickname" << "#" << std::endl;
	for (unsigned int j = 0; j < 8; j++)
		contact.print_all(&_contact[j], j);
	std::cout << "Enter an index for detailed information." << std::endl;
	std::cout << "Leave it empty to return to main menu." << std::endl;
	index = -1;
	while ((index < 0 || index > 7) || input.length() != 1)
	{
		input.erase();
		std::cout << "Index: ";
		if (!std::getline(std::cin, input))
			return ;
		if (input.length() == 0)
			return ;
		index = input[0] - '0' - 1;
		if (index < 0 || index > 7)
			std::cout << "Invalid index." << std::endl;
	}
	contact.print_contact(&_contact[index]);
}
