/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 10:28:03 by vdomasch          #+#    #+#             */
/*   Updated: 2024/07/17 12:56:20 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char *argv[])
{
	if (argc == 1)
	{
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);	
	}
	for(int j = 1; j < argc; j++)
	{
		std::string str(argv[j]);
		for (unsigned long int i = 0; i < str.size(); i++)
		{
			std::cout<< (char)toupper(str.at(i));
		}
	}
	std::cout<<std::endl;
	return (0);
}