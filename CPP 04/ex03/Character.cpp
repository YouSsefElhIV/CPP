/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 16:59:43 by yel-haya          #+#    #+#             */
/*   Updated: 2025/07/09 13:16:48 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	this->inv_index = 0;
	this->inventory[0] = 0;
	this->inventory[1] = 0;
	this->inventory[2] = 0;
	this->inventory[3] = 0;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] != 0)
			delete this->inventory[i];
	}
}

Character::Character(std::string name)
{
	this->inv_index = 0;
	this->name = name;
	this->inventory[0] = 0;
	this->inventory[1] = 0;
	this->inventory[2] = 0;
	this->inventory[3] = 0;
}

Character::Character(const Character &copy)
{
	this->name = copy.name;
	for (int i = 0;i < 4;i++)
	{
		if (this->inventory[i] != 0)
			delete this->inventory[i];
		if (copy.inventory[i])
		{
			this->inventory[i] = copy.inventory[i]->clone();
		}
		else
			this->inventory[i] = 0;
	}
}

Character &Character::operator=(const Character &copy)
{
	if (this != &copy)
	{
		this->name = copy.name;
		for (int i = 0;i < 4;i++)
		{
			if (copy.inventory[i])
			{
				this->inventory[i] = copy.inventory[i]->clone();
			}
			else
				this->inventory[i] = 0;
		}
	}
	return (*this);
}

std::string const &Character::getName() const
{
	return (this->name);
}

void    Character::equip(AMateria* m)
{
	if (!m)
		return ;
	if (this->inv_index < 4)
	{
		this->inventory[this->inv_index] = m;
		this->inv_index++;
	}
}
void    Character::unequip(int index)
{
	if (index >= 0 && index < 4 && this->inventory[index] != 0)
		this->inventory[index] = 0;
}

void    Character::use(int index, ICharacter& target)
{
	if (index >= 0 && index < 4)
	{
		if (this->inventory[index] != 0 && this->inventory[index]->getType() == "ice")
		{
			std::cout << "* shoots an ice bolt at " << target.getName() << "\n";
		}
		else if (this->inventory[index] != 0 && this->inventory[index]->getType() == "cure")
		{
			std::cout << "* heals  " << target.getName() << "'s wounds *\n";
		}
		else
			std::cout << "No Materia In That Spot\n";
			
	}
	else
		std::cout << "Wrong Index\n";
}
