/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:48:41 by vdomasch          #+#    #+#             */
/*   Updated: 2024/11/26 15:47:25 by vdomasch         ###   ########.fr       */
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

	std::string filename(argv[1]);
	std::string s1(argv[2]);
	std::string s2(argv[3]);

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

	std::string linefile("");
	while (std::getline(file, line))
	{
		linefile += line;
		line.clear();
		if (!file.eof())
			linefile += '\n';
	}
	int pos = 0;
	while (linefile.find(s1, pos) != std::string::npos)
	{
		pos = linefile.find(s1, pos);
		linefile.erase(pos, s1.size());
		linefile.insert(pos, s2);
		pos += s2.size();
	}
	outfile << linefile;
}