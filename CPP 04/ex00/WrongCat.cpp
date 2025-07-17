/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 17:21:40 by yel-haya          #+#    #+#             */
/*   Updated: 2025/07/05 10:06:32 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat Const Called\n";
    this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Dest Called\n";
}

WrongCat::WrongCat(const WrongCat &copy):WrongAnimal()
{
    std::cout << "WrongCat Copy Const Called\n";
    this->type = copy.type;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
    std::cout << "WrongCat Copy Assign Op Called\n";
    if (this != &copy)
    {
        this->type = copy.type;
    }
    return (*this);
}

void    WrongCat::makeSound() const
{
    std::cout << "WrongCat is meowing\n";
}
