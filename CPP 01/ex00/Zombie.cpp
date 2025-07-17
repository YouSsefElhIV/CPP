/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 10:28:02 by yel-haya          #+#    #+#             */
/*   Updated: 2025/06/06 14:11:11 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    
}

Zombie::~Zombie()
{
    std::cout << "\033[1;31mZombie is dead\n\033[0m";
}

void    Zombie::set_name(std::string name)
{
    this->name = name;
}

std::string Zombie::get_name()
{
    return (name);
}

void    Zombie::announce()
{
    std::cout << this->get_name() << ": BraiiiiiiinnnzzzZ...\n";
}
