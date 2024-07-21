/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 16:37:54 by vdomasch          #+#    #+#             */
/*   Updated: 2024/07/18 16:52:19 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string	&strREF = str;

	std::cout << "&str:    " << &str << std::endl << "&strPTR: " << &stringPTR << std::endl << "&strREF: " << &strREF << std::endl;
	std::cout << std::endl;
	std::cout << "str:     " << str << std::endl << "*strPTR: " << *stringPTR << std::endl << "strREF:  " << strREF << std::endl;
}