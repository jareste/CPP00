/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 00:10:32 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/09 21:13:31 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Agenda.h"

int	main(void)
{
	std::string	input;
	PhoneBook	phonebook;
	Contact		contact;

	std::cout << "Try options: 'ADD', 'SEARCH', 'EXIT'." << std::endl;
	while (true)
	{
		std::cout << ">";
		if (!std::getline(std::cin, input))
			return (1);
		for (int i = 0; input[i]; i++)
			input[i] = std::toupper(input[i]);
		if (input == "ADD")
			phonebook.add_contact(contact);
		else if (input == "SEARCH")
			std::cout << "SEARCH";
		else if (input == "EXIT")
			return (0);
		else
			std::cout << "Invalid instruction please try 'ADD', 'SEARCH' or 'EXIT'";
		std::cout << std::endl;
	}
}
