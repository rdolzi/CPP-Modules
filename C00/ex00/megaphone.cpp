/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdolzi <rdolzi@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:32:32 by rdolzi            #+#    #+#             */
/*   Updated: 2023/11/28 22:51:01 by rdolzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
		for (int i = 1; i < argc; i++)
			for (int j = 0; j < (int) strlen(argv[i]); j++)
				std::cout << (char)toupper(argv[i][j]);
	return (0);
}