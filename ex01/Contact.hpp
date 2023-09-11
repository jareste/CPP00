/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 20:21:15 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/11 02:19:39 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef CONTACT_H
 #define CONTACT_H

class Contact
{
	public:
		Contact();
		~Contact();
		void	add_new(Contact *contact);
		void	print_contact(Contact *contact);
		void	print_all(Contact *contact, unsigned int i);

	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;

};




#endif