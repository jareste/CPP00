/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 20:21:23 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/11 03:29:06 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Agenda.h"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string	fill_content(std::string str)
{
	std::string	input;

	while (input.length() < 1)
	{
		input.erase();
		std::cout << std::setw(16) << std::left << str;
		std::getline(std::cin, input);
	}
	return (input);
}

std::string	get_number(void)
{
	std::string	input;

	while (input.length() < 1)
	{
		input.erase();
		std::cout << std::setw(16) << "Phone Number:";
		std::getline(std::cin, input);
		for (unsigned int j = 0; j < input.length(); j++)
			if (input[j] < '0' || input[j] > '9')
			{
				std::cout << "'Phone Number' only accepts numbers." << std::endl;
				input.erase();
			}
	}
	return (input);
}

void	Contact::add_new(Contact *contact)
{
	contact->first_name = fill_content("First Name:");
	contact->last_name = fill_content("Last Name:");
	contact->nickname = fill_content("Nickname:");
	contact->phone_number = get_number();
	contact->darkest_secret = fill_content("Darkest Secret:");
}

void	Contact::print_all(Contact *contact, unsigned int j)
{
	if (contact->first_name.length() < 1)
		return ;
	std::cout << "# ";
	std::cout << std::left << std::setw(8) << std::left << (j + 1) << "|";
	if (contact->first_name.size() > 10)
		std::cout << std::left << std::setw(9) << contact->first_name.substr(0, 9) << "." << "|";
	else
		std::cout << std::left << std::setw(10) << contact->first_name << "|";
	if (contact->last_name.size() > 10)
		std::cout << std::left << std::setw(9) << contact->last_name.substr(0, 9) << "." << "|";
	else
		std::cout << std::left << std::setw(10) << contact->last_name << "|";
	if (contact->nickname.size() > 10)
		std::cout << std::left << std::setw(9) << contact->nickname.substr(0, 9) << "." << "#" << std::endl;
	else
		std::cout << std::left << std::setw(10) << contact->nickname << "#" << std::endl;
}

void	Contact::print_contact(Contact *contact)
{
	if (contact->first_name.length() < 1)
	{
		std::cout << "Contact non existent" << std::endl;
		return ;
	}
	std::cout << "###########################################" << std::endl;
	std::cout << std::setw(16) << "First Name: ";
	std::cout << contact->first_name << std::endl;
	std::cout << std::setw(16) << "Last Name: ";
	std::cout << contact->last_name << std::endl;
	std::cout << std::setw(16) << "Nickname: ";
	std::cout << contact->nickname << std::endl;
	std::cout << std::setw(16) << "Phone Number: ";
	std::cout << contact->phone_number << std::endl;
	std::cout << std::setw(16) << "Darkest Secret: ";
	std::cout << contact->darkest_secret << std::endl;
	std::cout << "###########################################" << std::endl;
}
