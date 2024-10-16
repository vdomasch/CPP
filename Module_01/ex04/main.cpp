/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:48:41 by vdomasch          #+#    #+#             */
/*   Updated: 2024/10/15 19:56:06 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
	if (argc != 4 || !argv[1][0] || !argv[2][0] || !argv[3][0])
	{
		std::cerr << "Error. Invalid arguments." << std::endl;
		return (1);
	}

	std::string	filename(argv[1]);
	std::string	s1(argv[2]);
	std::string	s2(argv[3]);

	filename.append(".replace");
	
	std::ifstream file(argv[1]);
	std::ofstream outfile(filename.c_str());

	if (!file.is_open())
	{
		std::cerr << "Error. Can't open file " << argv[1] << '.' << std::endl;
		return (2);
	}
	if (!outfile.is_open())
	{
		std::cerr << "Error. Can't open file " << filename << '.' << std::endl;
	}
	std::string line;

	bool endline = false;
	while (file)
	{
		int pos = 0;
		std::getline(file, line);
		if (!line.empty() && endline)
			outfile << std::endl;
		while (line.find(s1, pos) != std::string::npos)
		{
			pos = line.find(s1, pos);
			line.erase(pos, s1.size());
			line.insert(pos, s2);
			pos += s2.size();
		}
		outfile << line;
		endline = true;
		line.clear();
	}
}