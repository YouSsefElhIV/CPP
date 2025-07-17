/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 16:57:26 by yel-haya          #+#    #+#             */
/*   Updated: 2025/07/07 20:43:17 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    this->type = "cure";
}

Cure::Cure(std::string type)
{
    this->type = type;
}

Cure::~Cure()
{

}

Cure::Cure(const Cure &copy): AMateria(copy)
{
    this->type = copy.type;
}

Cure &Cure::operator=(const Cure &copy)
{
    this->type = copy.type;
    return (*this);
}

Cure *Cure::clone() const
{
	Cure *new_cure = new Cure("cure");
    return (new_cure);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}
