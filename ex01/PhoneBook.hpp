/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 20:20:56 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/09 20:08:37 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Agenda.h"

class PhoneBook
{
	public:
		void	add_contact(Contact contact);
		Contact			_contact[8];
	private:
		unsigned int	i;

};


#endif
