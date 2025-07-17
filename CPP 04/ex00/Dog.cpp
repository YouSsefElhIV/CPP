/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 17:15:38 by yel-haya          #+#    #+#             */
/*   Updated: 2025/07/05 10:15:01 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Const Called\n";
    this->type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog Dest Called\n";
}

Dog::Dog(const Dog &copy):Animal()
{
    std::cout << "Dog Copy Const Called\n";
    this->type = copy.type;
}

Dog &Dog::operator=(const Dog &copy)
{
    std::cout << "Animal Copy Assign Op Called\n";
    if (this != &copy)
    {
        this->type = copy.type;
    }
    return (*this);
}

void    Dog::makeSound() const
{
    std::cout << "Dog is barking\n";
}
