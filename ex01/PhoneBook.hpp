/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 20:20:56 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/11 02:19:43 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Agenda.h"

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void			add_contact(Contact contact);
		Contact			_contact[8];
		void			search_contact(Contact contact);
	private:
		unsigned int	i;
		std::string		fill_content(std::string str);
		std::string		get_number(void);
};


#endif
