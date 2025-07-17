/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 16:26:58 by yel-haya          #+#    #+#             */
/*   Updated: 2025/07/07 20:40:29 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{

}

AMateria::~AMateria()
{

}

AMateria::AMateria(const AMateria &copy)
{
	this->type = copy.type;
}

AMateria &AMateria::operator=(const AMateria &copy)
{
	if (this != &copy)
		this->type = copy.type;
	return (*this);
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

std::string const &AMateria::getType() const
{
	return (this->type);
}

void	AMateria::use(ICharacter& )
{

}


