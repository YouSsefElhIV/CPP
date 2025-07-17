/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:15:38 by yel-haya          #+#    #+#             */
/*   Updated: 2025/06/15 18:29:16 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap has been created\n";
}

FragTrap::FragTrap(std::string name)
{
    this->name = name;
    std::cout << name << " has been destroyed\n";
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap has been destroyed\n";
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy)
{
    std::cout << "FragTrap has been copied\n";
    this->name = copy.name;
	this->HitPoints = copy.HitPoints;
	this->EnergyPoints = copy.EnergyPoints;
	this->AttackDamage = copy.AttackDamage;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
    std::cout << "FragTrap has been copied\n";
    std::cout << "\n";
	if (this != &copy)
	{
		this->name = copy.name;
		this->HitPoints = copy.HitPoints;
		this->EnergyPoints = copy.EnergyPoints;
		this->AttackDamage = copy.AttackDamage;
	}
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	if (this->EnergyPoints <= 0 || this->HitPoints <= 0)
	{
		std::cout << "Can't get a highFive Low on Energy Points/dead\n";
	}
	else
	{
        std::cout << "a positive high-fives request\n";
		this->EnergyPoints--;
	}
}