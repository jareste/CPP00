/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:31:46 by jareste-          #+#    #+#             */
/*   Updated: 2023/08/27 18:52:16 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for(int i = 1; argv[i]; i++)
		{
			if (i > 1)
				std::cout << " ";
			for(int j = 0; argv[i][j]; j++)
				std::cout << (char) std::toupper(argv[i][j]);
		}

	}
	std::cout << std::endl;
	return (0);
}