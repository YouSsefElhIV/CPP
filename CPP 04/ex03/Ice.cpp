/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 16:53:51 by yel-haya          #+#    #+#             */
/*   Updated: 2025/07/07 20:43:34 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	this->type = "ice";
}

Ice::Ice(std::string type)
{
	this->type = type;
}

Ice::~Ice()
{

}

Ice::Ice(const Ice &copy): AMateria(copy)
{
    this->type = copy.type;
}

Ice &Ice::operator=(const Ice &copy)
{
	    this->type = copy.type;
	return (*this);
}

Ice *Ice::clone() const
{
	Ice *new_ice = new Ice("ice");
    return (new_ice);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << "\n";
}
