/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 15:51:28 by yel-haya          #+#    #+#             */
/*   Updated: 2025/06/07 16:06:23 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
	this->has_weapon = 0;
}

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->has_weapon = 0;
}

HumanB::~HumanB()
{
	
}

std::string HumanB::getName()
{
	return (this->name);
}

void	HumanB::setWeapon(Weapon &wp)
{
	this->wp = &wp;
	this->has_weapon = 1;
}

void    HumanB::setName(std::string name)
{
	this->name = name;
}

void    HumanB::attack()
{
	if (this->has_weapon == 1)
		std::cout << this->name << " attacks with their " << (*this->wp).getType() << "\n";
	else
		std::cout << this->name << " has no weapon to attack with\n";
	
}