/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 17:25:25 by yel-haya          #+#    #+#             */
/*   Updated: 2025/07/05 16:17:27 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Const Called\n";
    this->type = "JustAnAnimal";
}

Animal::~Animal()
{
    std::cout << "Animal Dest Called\n";
}

Animal::Animal(const Animal &copy)
{
    std::cout << "Animal Copy Const Called\n";
    this->type = copy.type;
}

Animal &Animal::operator=(const Animal &copy)
{
    std::cout << "Animal Copy Assign Op Called\n";
    if (this != &copy)
    {
        this->type = copy.type;
    }
    return (*this);
}

std::string Animal::getType() const
{
    return (this->type);
}
