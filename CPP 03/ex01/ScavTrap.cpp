/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 14:24:03 by yel-haya          #+#    #+#             */
/*   Updated: 2025/06/15 18:28:32 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap has been created\n";
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap has been created\n";
    this->name = name;
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap has been destroyed\n";
    
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy)
{
    std::cout << "ScavTrap has been copied\n";
	this->name = copy.name;
	this->HitPoints = copy.HitPoints;
	this->EnergyPoints = copy.EnergyPoints;
	this->AttackDamage = copy.AttackDamage;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
    std::cout << "ScavTrap has been copied\n";
	if (this != &copy)
	{
		this->name = copy.name;
		this->HitPoints = copy.HitPoints;
		this->EnergyPoints = copy.EnergyPoints;
		this->AttackDamage = copy.AttackDamage;
	}
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (this->EnergyPoints <= 0)
	{
		can_attack_heal = 0;
		std::cout << "Can't attack Low on Energy Points\n";
	}
	else
	{
		can_attack_heal = 1;
		std::cout << "ScavTrap " << this->name << " attacks " << target << " , causing 20 points of damage!\n";
		this->EnergyPoints--;
	}
}

void ScavTrap::guardGate()
{
	if (this->EnergyPoints <= 0 || this->HitPoints <= 0)
	{
		std::cout << "Can't raise the GateGuard Low on Energy Points/dead\n";
	}
	else
	{
        std::cout << "ScavTrap is now in Gate keeper mode.\n";
		this->EnergyPoints--;
	}
}