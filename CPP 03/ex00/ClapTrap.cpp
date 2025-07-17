/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 13:34:42 by yel-haya          #+#    #+#             */
/*   Updated: 2025/06/15 14:15:22 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap has been created\n";
	this->HitPoints = 10;
	this->EnergyPoints = 10;
	this->AttackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << name << " has been created\n";
	this->name = name;
	this->HitPoints = 10;
	this->EnergyPoints = 10;
	this->AttackDamage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap has been destroyed\n";
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClapTrap has been copied\n";
	this->name = copy.name;
	this->HitPoints = copy.HitPoints;
	this->EnergyPoints = copy.EnergyPoints;
	this->AttackDamage = copy.AttackDamage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
	std::cout << "ClapTrap has been copied\n";
	if (this != &copy)
	{
		this->name = copy.name;
		this->HitPoints = copy.HitPoints;
		this->EnergyPoints = copy.EnergyPoints;
		this->AttackDamage = copy.AttackDamage;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->EnergyPoints <= 0)
	{
		can_attack_heal = 0;
		std::cout << "Can't attack Low on Energy Points\n";
	}
	else
	{
		can_attack_heal = 1;
		std::cout << "ClapTrap " << this->name << " attacks " << target << " , causing 2 points of damage!\n";
		this->EnergyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->HitPoints < 0)
	{
		std::cout << this->name << " Already Dead..\n";
	}
	else
	{
		std::cout << this->name << " Took " << amount << " of Damage\n";
		this->HitPoints -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->EnergyPoints <= 0)
	{
		can_attack_heal = 0;
		std::cout << "Can't repair myself low on Energy Points\n";
	}
	else
	{
		can_attack_heal = 1;
		std::cout << "Got repaired\n";
		this->HitPoints += amount;
		this->EnergyPoints--;
	}
}
