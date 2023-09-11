/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 00:10:32 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/11 02:19:45 by jareste-         ###   ########.fr       */
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
			phonebook.search_contact(contact);
		else if (input == "EXIT")
			return (0);
		else
			std::cout << ERROR_MSG << std::endl;
	}
}
