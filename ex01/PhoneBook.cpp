/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 20:21:06 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/10 19:17:06 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Agenda.h"

void	PhoneBook::add_contact(Contact contact)
{
	contact.add_new(&_contact[i]);
	
//////////////////////////////////testing print
	for (unsigned int x = 0; x <= i; x++)
	{
		std::cout << "NEWCONTACT:::::::::" << std::endl;
		contact.print_contact(&_contact[x]);
	}
//////////////////////////////////testing print
	if (i + 1 > 8)
		i = 0;
	else
		i++;
}
