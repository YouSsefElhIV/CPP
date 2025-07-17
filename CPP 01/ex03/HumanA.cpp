/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 13:05:22 by yel-haya          #+#    #+#             */
/*   Updated: 2025/06/07 14:09:18 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& wp) : name(name), wp(wp)
{
    
}

HumanA::~HumanA()
{
    
}

std::string HumanA::getName()
{
    return (this->name);
}

void    HumanA::setName(std::string name)
{
    this->name = name;
}

void    HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->wp.getType() << "\n";
}