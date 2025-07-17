/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 11:57:30 by yel-haya          #+#    #+#             */
/*   Updated: 2025/06/12 12:31:22 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int adding_index = 0;

PhoneBook::PhoneBook()
{
	for (int i = 0; i < 8; i++)
		contacts[i].set_empty(1);
}

PhoneBook::~PhoneBook()
{
	
}

void	ten_less(int len, std::string str)
{
	std::cout << "|";
	for(int i = 0; i < len; i++)
	{
		std::cout << " ";
	}
	if (len < 0)
	{
		std::cout << str.substr(0, 9) << ".";
	}
	else
		std::cout << str;
}

void PhoneBook::searching()
{
	std::string st;
	int index;

	if (contacts[0].get_empty() == 1)
	{
		std::cout << "PhoneBook is empty\n";
		return ;
	}
	std::cout << "---------------------------------------------\n";
	std::cout << "|   Index  | FirstName| LastName | NickName |\n";
	std::cout << "---------------------------------------------\n";
	for (int i = 0; i < 8; i++)
	{
		if (contacts[i].get_empty() == 0)
		{
			std::cout << "|         " << i;
			ten_less(10 - contacts[i].get_firstname().length(), contacts[i].get_firstname());
			ten_less(10 - contacts[i].get_lastname().length(), contacts[i].get_lastname());
			ten_less(10 - contacts[i].get_nickname().length(), contacts[i].get_nickname());
			std::cout << "|\n";
		}
	}
	std::cout << "---------------------------------------------\n";
	if (contacts[0].get_empty() == 0)
	{
		std::cout << "choose an index (0 - 7): ";
		std::cin >> st;
		char checking;
		checking = std::cin.peek();
		if (checking != '\n' && checking != EOF)
		{
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "\033[31m		Wrong Input\n\033[0m";
			return ;
		}
        if (std::cin.eof())
        {
                std::cout << "\n";
                exit (1);
        }
		int i = 0;
		while (st[i])
		{
			if (!std::isdigit(st[i]))
			{
				std::cin.clear();
    			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "Not a digit\n";
				return ;
			}
			i++;	
		}
		index = std::atoi(st.c_str());
		if (index > 7 || index < 0)
			std::cout << "Wrong index\n";
		else
		{
			if (contacts[index].get_empty() == 1)
			std::cout << "The phonebook is currently empty at that index\n";
			else
			{
				std::cout << "Index		:		" << index << "\n";
				std::cout << "First Name:			" << contacts[index].get_firstname() << "\n";
				std::cout << "Last Name :			" << contacts[index].get_lastname() << "\n";
				std::cout << "NickName  :			" << contacts[index].get_nickname() << "\n";
				std::cout << "Number	:			" << contacts[index].get_number() << "\n";
				std::cout << "Secret	:			" << contacts[index].get_secret() << "\n";
				std::cout << "---------------------------------------------\n";
			}
		}
	}
}

void PhoneBook::adding(std::string firstName, std::string lastName, std::string nickName, std::string number, std::string secret)
{
	contacts[adding_index % 8].set_firstname(firstName);
	contacts[adding_index % 8].set_lastname(lastName);
	contacts[adding_index % 8].set_nickname(nickName);
	contacts[adding_index % 8].set_number(number);
	contacts[adding_index % 8].set_secret(secret);
	contacts[adding_index % 8].set_empty(0);
	adding_index++;
	if (adding_index >= 8)
		adding_index = 0;
}
