/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 10:26:52 by yel-haya          #+#    #+#             */
/*   Updated: 2025/06/06 13:06:47 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
    Zombie zombie1;
    Zombie *heap_zombie;

    zombie1.set_name("foo");
    zombie1.announce();
    std::cout << "\n";
    randomChump("stack_Zombie");
    std::cout << "\n";
    heap_zombie = newZombie("heap_Zombie");
    heap_zombie->announce();
    delete heap_zombie;
    return (0);
}