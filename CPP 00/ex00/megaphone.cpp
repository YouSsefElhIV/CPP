/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 10:57:31 by yel-haya          #+#    #+#             */
/*   Updated: 2025/06/05 16:32:58 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char    *upper(char *s)
{
    int i = 0;

    while (s[i])
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;
        i++;
    }
    return (s);
}

int main(int ac, char **av)
{
    int i;

    i = 1;
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    else if (ac > 1)
    {
        while (av[i])
        {
            av[i] = upper(av[i]);
            std::cout << av[i];
            i++;
        }
        std::cout << "\n";
    }
    return (0);
}