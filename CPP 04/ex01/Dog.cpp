/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 17:15:38 by yel-haya          #+#    #+#             */
/*   Updated: 2025/07/05 15:43:10 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Const Called\n";
	this->type = "Dog";
	this->brain = new Brain;
}

Dog::~Dog()
{
	std::cout << "Dog Dest Called\n";
	delete this->brain;
}

Dog::Dog(const Dog &copy):Animal()
{
	std::cout << "Dog Copy Const Called\n";
	this->type = copy.type;
	this->brain = new Brain(*copy.brain);
}

Dog &Dog::operator=(const Dog &copy)
{
	std::cout << "Animal Copy Assign Op Called\n";
	if (this != &copy)
	{
		this->type = copy.type;
		this->brain = new Brain(*copy.brain);
	}
	return (*this);
}

void    Dog::makeSound() const
{
	std::cout << "Dog is barking\n";
}

void    Dog::set_brain(int index, std::string idea)
{
	this->brain->set_ideas(index, idea);
}

std::string	Dog::get_brain(int index)
{
	return (this->brain->get_ideas(index));
}
