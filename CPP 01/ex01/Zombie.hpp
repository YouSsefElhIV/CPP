/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 10:28:15 by yel-haya          #+#    #+#             */
/*   Updated: 2025/06/06 13:55:52 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <new>
#include <memory>


class Zombie
{
    private:
    std::string name;
	public:
    Zombie();    
    ~Zombie();
    void	set_name(std::string);
    std::string get_name();
    void    announce();
};

Zombie* zombieHorde(int N, std::string name);


#endif
