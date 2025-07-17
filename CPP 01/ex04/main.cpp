/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 16:14:56 by yel-haya          #+#    #+#             */
/*   Updated: 2025/06/13 10:17:48 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sys/stat.h>
#include <unistd.h>

int main (int ac, char **av)
{
	if (ac == 4)
	{
		std::string name = av[1];
		std::string lookfor = av[2];
		std::string replacewith = av[3];
		struct stat file_info;
	
		if (stat(name.c_str(), &file_info) != 0 || !S_ISREG(file_info.st_mode))
		{
			std::cout << "Bad File\n";
			return (1);
		}
		std::ifstream file(name.c_str());
		if (!file)
		{
			std::cout << "Failed to open that file\n";
			return (1);
		}
		name.append(".replace");
		std::ofstream copy(name.c_str());
		if (!copy.is_open())
		{
			std::cout << "Failed to create the copy\n";
			return (1);
		}
	
		std::string line;

		if (lookfor.empty())
		{
			while (std::getline (file, line))
			{
				copy << line << "\n";
			}
		}
		else
		{
			while (std::getline (file, line))
			{
				std::string new_line;
				size_t line_pos = 0;
				size_t occurence_pos = 0;
				while (true)
				{
					occurence_pos = line.find(lookfor, line_pos);
					if (occurence_pos != std::string::npos)
					{
						new_line += line.substr(line_pos, occurence_pos - line_pos);
						new_line += replacewith;
						line_pos = occurence_pos + lookfor.length();
					}
					else
					{
						new_line += line.substr(line_pos);
						break ;	
					}
				}
				copy << new_line << "\n";
			}
		}
		std::cout << "The file is ready\n";
		file.close();
		copy.close();
	}
	else
	{
		std::cout << "\033[31mUsage: ./Sed filename string1(to replace) string2(replace with)\n\033[0m";
		return (1);
	}
	return (0);
}