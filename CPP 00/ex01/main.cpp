/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 19:46:53 by yel-haya          #+#    #+#             */
/*   Updated: 2025/06/12 12:33:00 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

bool	check_non_printable(std::string string)
{
	for (size_t i = 0; i < string.length(); i++)
	{
        if (!std::isprint(static_cast<unsigned char>(string[i])))
        {
			std::cout << "Invalid Input\n";
			return (false);
		}
    }
	return (true);
}

int main()
{
	std::string command;
	PhoneBook phone;
	char checking;

	std::cout << "	======================================================================\n";			
    std::cout << "\033[38;5;214m			***	Welcome To The PhoneBook  ***\n\033[0m";
    std::cout << "	======================================================================\n";	
	while (1)
	{
		std::cout << "\033[34mPlease Enter The Action That You Wish To Perform (ADD, SEARCH, EXIT): \033[0m";
		std::cin >> command;
		checking = std::cin.peek();
		if (checking != '\n' && checking != EOF)
		{
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "\033[31m		This is not minishell, please stick yo the options provided!!\n\033[0m";
			continue ;
		}
		if (std::cin.eof())
		{
			std::cout << "\n";
            exit (1);
        }
		if (command == "ADD")
		{
			std::string firstname;
			std::string lastname;
			std::string nickname;
			std::string number;
			std::string secret;
			std::cout << "---------------------------------------------------------------------------\n";
			std::cout << "Please enter the name you choose for the contact: ";
			std::cin >> firstname;
			checking = std::cin.peek();
			if (checking != '\n' && checking != EOF)
			{
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "\033[31m		one Word please\n\033[0m";
				continue ;
			}
			if (std::cin.eof())
			{
				std::cout << "\n";
				exit (1);
			}
			if (!check_non_printable(firstname))
				continue ;
			std::cout << "---------------------------------------------------------------------------\n";
			std::cout << "Please enter the lastname you choose for the contact: ";
			std::cin >> lastname;
			checking = std::cin.peek();
			if (checking != '\n' && checking != EOF)
			{
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "\033[31m		one Word please\n\033[0m";
				continue ;
			}
			if (std::cin.eof())
			{
				std::cout << "\n";
				exit (1);
			}
			if (!check_non_printable(lastname))
				continue ;
			std::cout << "---------------------------------------------------------------------------\n";
			std::cout << "Please enter the nickname you choose for the contact: ";
			std::cin >> nickname;
			checking = std::cin.peek();
			if (checking != '\n' && checking != EOF)
			{
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "\033[31m		one Word please\n\033[0m";
				continue ;
			}
			if (std::cin.eof())
			{
				std::cout << "\n";
				exit (1);
			}
			if (!check_non_printable(nickname))
				continue ;
			std::cout << "---------------------------------------------------------------------------\n";
			std::cout << "Please enter the number of the contact: ";
			std::cin >> number;
			checking = std::cin.peek();
			if (checking != '\n' && checking != EOF)
			{
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "\033[31m		Wrong Input\n\033[0m";
				continue ;
			}
			if (std::cin.eof())
			{
			        std::cout << "\n";
			        exit (1);
			}
			int j = 0;
			if (number.length() != 10)
			{
				std::cin.clear();
    			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "invalid Number (has to be 10 digits) please try again\n";
				continue ;
			}
			int issue = 0;
			while(number[j])
			{
				if (number[j] <= 47 || number[j] >= 58)
				{
					std::cin.clear();
    				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					std::cout << "invalid Number (has to be digits) please try again\n";
					issue = 1;
					break ;
				}
				j++;
			}
			if (issue == 1)
				continue ;
			std::cout << "---------------------------------------------------------------------------\n";
			std::cout << "Please enter the secret: ";
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::getline(std::cin, secret);
			if (std::cin.eof())
			{
				std::cout << "\n";
				exit (1);
			}
			if (!check_non_printable(secret))
				continue ;
			phone.adding(firstname, lastname, nickname, number, secret);
    		std::cout << "		============================================\n";			
			std::cout << "\033[32m		|	Contact Added SUCCESSFULLY	   |\n\033[0m";
    		std::cout << "		============================================\n";			

		}
		else if (command == "SEARCH")
		{
    		std::cout << "	==============================================\n";			
    		std::cout << "\033[38;5;214m	***	Searching for the contact...  ***\n\033[0m";
    		std::cout << "	==============================================\n";			
			phone.searching();
		}
		else if (command == "EXIT")
		{
			std::cout << "		|====================================|\n";
    		std::cout << "		|  	OOOOO  U   U TTTTT       *   |\n";
    		std::cout << "		|* 	O   O  U   U   T    *        |\n";
    		std::cout << "		|* 	O   O  U   U   T        *    |\n";
    		std::cout << "		| *	O   O  U   U   T    *        |\n";
    		std::cout << "		| *	OOOOO   UUU    T         *   |\n";
    		std::cout << "		|====================================|\n";
    		std::cout << "\033[33m		|      *** OUT, EXITING...! ***      |\033[0m\n";
	    	std::cout << "		|====================================|\n";
			break ;
		}
		else
		{
			std::cin.clear();
    		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "\033[31m		This is not minishell, please stick yo the options provided!!\n\033[0m";
		}
	}
	return (0);
}
