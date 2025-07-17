/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 10:40:53 by yel-haya          #+#    #+#             */
/*   Updated: 2025/06/07 16:05:40 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
    {
        Weapon club("crude spiked club");
        HumanA bob("Bob", club);

        std::cout << "\033[34m";

        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club("crude spiked club");
        HumanB jim("Jim");

        std::cout << "------------------------------------------------------------\n";
        std::cout << "\033[31mCase of Attacking before acquiring a Weapon:\n";

        std::cout << "\033[35m";
        jim.attack();
    
        std::cout << "------------------------------------------------------------\n";
        
        std::cout << "\033[32mCase of Attacking After acquiring a Weapon:\n";
        jim.setWeapon(club);
        std::cout << "\033[34m";
        jim.attack();

        club.setType("some other type of club");
        jim.attack();
    }
    return 0;
}
