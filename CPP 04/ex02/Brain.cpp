/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 13:02:27 by yel-haya          #+#    #+#             */
/*   Updated: 2025/07/05 15:20:06 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain const is called\n";    
}

Brain::~Brain()
{
    std::cout << "Brain destr is called\n";    
}

Brain::Brain(const Brain &copy)
{
    for (int i = 0;i < 100; i++)
    {
        this->ideas[i] = copy.ideas[i];
        i++;
    }
}

Brain &Brain::operator=(const Brain &copy)
{
    if (this != &copy)
    {
        for (int i = 0;i < 100; i++)
        {
            this->ideas[i] = copy.ideas[i];
            i++;
        }
    }
    return (*this);
}

void    Brain::set_ideas(int index, std::string idea)
{
    this->ideas[index] = idea;
}

std::string Brain::get_ideas(int index)
{
    return (this->ideas[index]);
}