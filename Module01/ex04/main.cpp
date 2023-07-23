/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 10:37:40 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/19 13:04:12 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	replace_line(std::string fileName, std::string s1, std::string s2)
{
	std::string contents;
	std::string line;
	std::ifstream file(fileName.c_str());
	bool flag;
	if (file.is_open())
	{
		while (std::getline(file, line))
		{
			if (flag)
				contents += "\n";
			contents += line;
			flag = true;
		}
		file.close();
	}
	else
	{
		std::cout << "File does not exist" << std::endl;
		return ;
	}
	std::string	newFilename = fileName + ".replace";
	std::ofstream	newFile(newFilename.c_str());
	if (newFile.is_open())
	{
		size_t pos = contents.find(s1);
		while (pos != std::string::npos)
		{
			contents = contents.substr(0, pos) + s2 + contents.substr(pos + s1.length());
			pos = contents.find(s1, pos + s2.length());
		}
		newFile << contents << std::endl;
		newFile.close();
	}
	else
		std::cout << "File does not exist" << std::endl;
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string fileName = argv[1];
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		replace_line(fileName, s1, s2);
	}
	else
	{
		std::cout << "Insert correct input" << std::endl;
		return (0);
	}
}
