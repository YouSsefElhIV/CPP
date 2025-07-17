/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 13:56:44 by yel-haya          #+#    #+#             */
/*   Updated: 2025/06/06 14:11:46 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
    Zombie *zombie1;

    zombie1 = zombieHorde(3, "foo");

    if (zombie1 != NULL)
    {
        for (int i = 0; i< 3; i++)
            zombie1[i].announce();
        std::cout << "\033[1;33mHord is ready to attack\n\033[0m";
    }
    
    delete[] zombie1;
    return (0);
}
