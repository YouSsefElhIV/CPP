/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 13:06:16 by yel-haya          #+#    #+#             */
/*   Updated: 2025/06/06 13:08:43 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *zombie1;
    int i = 0;

    if (N <= 0)
        return (NULL);
    zombie1 = new Zombie[N];
    if (!zombie1)
        return (NULL);
    while (i < N)
    {
        zombie1[i].set_name(name);
        i++;
    }
    return (zombie1);
}