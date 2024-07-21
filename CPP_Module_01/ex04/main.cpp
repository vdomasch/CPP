/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 09:21:55 by vdomasch          #+#    #+#             */
/*   Updated: 2024/07/21 11:33:50 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	copy_file(std::string new_filename, char **argv)
{
	std::ifstream	file(argv[1]);
	std::ofstream	new_file(new_filename.data());
	std::string line;
	std::string s1(argv[2]);
	std::string s2(argv[3]);
	std::size_t	pos;
	
	while (std::getline(file, line))
	{
		pos = line.find(s1);
		int i = 0;
		while (pos != std::string::npos)
		{
			line.erase(pos, s1.size());
			line.insert(pos, s2);
			pos = line.find(s1, pos + s2.size() - s1.size() + 1);
		}
		i++;
		new_file << line << std::endl;
	}
	file.close();
	new_file.close();
}

int	main(int argc, char **argv)
{
	if (argc != 4 || !(argv[1][0] || argv[2][0] || argv[3][0]))
	{
		std::cout << "Invalid arguments." << std::endl;
		return (1);
	}
	
	std::string filename = argv[1];
	std::string new_filename(filename);
	
	if (filename.find('.') != std::string::npos)
	{
		new_filename.insert(filename.find('.'), ".replace");
	}
	else
		new_filename.append(".replace");
		
	copy_file(new_filename, argv);
	return (0);
}	