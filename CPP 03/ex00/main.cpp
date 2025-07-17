/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 13:51:09 by yel-haya          #+#    #+#             */
/*   Updated: 2025/06/15 14:23:25 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int can_attack_heal = 0;
int main()
{
    ClapTrap playerOne("PlayerOne");
    ClapTrap playerTwo("PlayerTwo");

    std::cout << "\n\033[34m";
    playerOne.attack("playerTwo");
    if (can_attack_heal == 1)
        playerOne.takeDamage(2);

    std::cout << "\033[0m";
    std::cout << "\n";

    for (int i = 0; i < 9; i++)
    {
        std::cout << "\033[33m";
        playerTwo.attack("PlayerOne");
        if (can_attack_heal == 1)
            playerOne.takeDamage(2);
        std::cout << "\033[0m";
    }

    playerOne.beRepaired(2);
    
    playerTwo.attack("PlayerOne");
    if (can_attack_heal == 1)
        playerOne.takeDamage(2);

    playerTwo.attack("PlayerOne");
    if (can_attack_heal == 1)
        playerOne.takeDamage(2);

    playerTwo.beRepaired(5);
    std::cout << "\n";
    return (0);
}