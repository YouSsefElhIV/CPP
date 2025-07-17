/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:41:50 by yel-haya          #+#    #+#             */
/*   Updated: 2025/06/15 18:37:36 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap has been created\n";
    this->HitPoints = FragTrap::HitPoints;
    this->EnergyPoints = ScavTrap::EnergyPoints;
    this->AttackDamage = FragTrap::AttackDamage;
}

DiamondTrap::DiamondTrap(std::string name)
{
    std::cout << "DiamondTrap has been created\n";
    this->name = name;
    ClapTrap::name = name + "_clap_name";
    this->HitPoints = FragTrap::HitPoints;
    this->EnergyPoints = ScavTrap::EnergyPoints;
    this->AttackDamage = FragTrap::AttackDamage;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap has been destroyed\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy): ClapTrap(copy), FragTrap(copy), ScavTrap(copy)
{
    std::cout << "DiamondTrap has been copied\n";
    this->name = copy.name;
    ClapTrap::name = copy.name + "_clap_name";
    this->HitPoints = copy.FragTrap::HitPoints;
    this->EnergyPoints = copy.ScavTrap::EnergyPoints;
    this->AttackDamage = copy.FragTrap::AttackDamage;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy)
{
    std::cout << "DiamondTrap has been copied\n";
    if (this != &copy)
    {
        this->name = copy.name;
        ClapTrap::name = copy.name + "_clap_name";
        this->HitPoints = copy.FragTrap::HitPoints;
        this->EnergyPoints = copy.ScavTrap::EnergyPoints;
        this->AttackDamage = copy.FragTrap::AttackDamage;
    }
    return (*this);
}

void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	if (this->EnergyPoints <= 0 || this->HitPoints <= 0)
	{
		std::cout << "I have no idea what is my name...\n";
	}
	else
	{
        std::cout << "My name is " << this->name << " as for my ClapTrap name its " << ClapTrap::name << "\n";
		this->EnergyPoints--;
	}
}