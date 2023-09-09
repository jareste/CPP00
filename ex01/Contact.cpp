/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 20:21:23 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/09 21:29:32 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Agenda.h"

void	Contact::add_new(Contact *contact)
{
	std::string	input;
	
	while (input.length() < 1)
	{
		input.erase();
		std::cout << "First Name:";
		std::getline(std::cin, input);
	}
	contact->first_name = input;
	input.erase();
	while (input.length() < 1)
	{
		input.erase();
		std::cout << "Last Name:";
		std::getline(std::cin, input);
	}
	contact->last_name = input;
	input.erase();
	while (input.length() < 1)
	{
		input.erase();
		std::cout << "Nickname:";
		std::getline(std::cin, input);
	}
	contact->nickname = input;
	input.erase();
	while (input.length() < 1)
	{
		input.erase();
		std::cout << "Phone Number:";
		std::getline(std::cin, input);
	}
	contact->phone_number = input;
	input.erase();
	while (input.length() < 1)
	{
		input.erase();
		std::cout << "Darkest Secret:";
		std::getline(std::cin, input);
	}
	contact->darkest_secret = input;

}

//aux funct
void	Contact::print_contact(Contact *contact)
{
	std::cout << contact->first_name << std::endl;
	std::cout << contact->last_name << std::endl;
	std::cout << contact->nickname << std::endl;
	std::cout << contact->phone_number << std::endl;
	std::cout << contact->darkest_secret << std::endl;
}
