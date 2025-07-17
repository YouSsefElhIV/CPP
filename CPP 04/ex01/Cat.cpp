/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 17:15:55 by yel-haya          #+#    #+#             */
/*   Updated: 2025/07/05 15:51:21 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Const Called\n";
    this->type = "Cat";
    this->brain = new Brain;
}

Cat::~Cat()
{
    std::cout << "Cat Dest Called\n";
    delete this->brain;
}

Cat::Cat(const Cat &copy):Animal()
{
    std::cout << "Cat Copy Const Called\n";
    this->type = copy.type;
    this->brain = new Brain(*copy.brain);
}

Cat &Cat::operator=(const Cat &copy)
{
    std::cout << "Cat Copy Assign Op Called\n";
    if (this != &copy)
    {
        this->type = copy.type;
        this->brain = new Brain(*copy.brain);
    }
    return (*this);
}

void    Cat::makeSound() const
{
    std::cout << "Cat is meowing\n";
}

void    Cat::set_brain(int index, std::string idea)
{
	this->brain->set_ideas(index, idea);
}

std::string	Cat::get_brain(int index)
{
	return (this->brain->get_ideas(index));
}
