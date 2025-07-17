/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 18:54:23 by yel-haya          #+#    #+#             */
/*   Updated: 2025/06/08 11:54:32 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	ptrToMemberFunc[0] = &Harl::debug;
	ptrToMemberFunc[1]=  &Harl::info;
	ptrToMemberFunc[2] = &Harl::warning;
	ptrToMemberFunc[3] = &Harl::error;
}

Harl::~Harl()
{
}

void Harl::debug()
{
    std::cout << "[ DEBUG ]\n";
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n\n";
}

void Harl::info()
{
    std::cout << "[ INFO ]\n";
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n\n";   
}

void Harl::warning()
{
    std::cout << "[ WARNING ]\n";
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month.\n\n";
}

void Harl::error()
{
    std::cout << "[ ERROR ]\n";
    std::cout << "This is unacceptable! I want to speak to the manager now.\n\n";
}

void Harl::complain(std::string level)
{
    std::string search[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    for (i = 0; i < 4; i++)
    {
        if (level == search[i])
            break ;
    }
    switch (i)
    {
        case (0):
            (this->*ptrToMemberFunc[0])();
            //fallthrough
        case (1):
            (this->*ptrToMemberFunc[1])();
            //fallthrough
        case (2):
            (this->*ptrToMemberFunc[2])();
            //fallthrough
        case (3):
            (this->*ptrToMemberFunc[3])();
            break ;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]\n";
    }   
}
