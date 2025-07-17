/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 17:15:55 by yel-haya          #+#    #+#             */
/*   Updated: 2025/07/05 10:14:59 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Const Called\n";
    this->type = "Cat";
}

Cat::~Cat()
{
    std::cout << "Cat Dest Called\n";
}

Cat::Cat(const Cat &copy):Animal()
{
    std::cout << "Cat Copy Const Called\n";
    this->type = copy.type;
}

Cat &Cat::operator=(const Cat &copy)
{
    std::cout << "Cat Copy Assign Op Called\n";
    if (this != &copy)
    {
        this->type = copy.type;
    }
    return (*this);
}

void    Cat::makeSound() const
{
    std::cout << "Cat is meowing\n";
}