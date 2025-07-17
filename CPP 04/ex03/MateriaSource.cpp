/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:28:44 by yel-haya          #+#    #+#             */
/*   Updated: 2025/07/08 17:55:39 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	this->index = 0;
	this->store[0] = 0;
	this->store[1] = 0;
	this->store[2] = 0;
	this->store[3] = 0;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->store[i] != 0)
			delete this->store[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	this->index = copy.index;
	for (int i = 0; i < 4; i++)
	{
		if (copy.store[i])
		{
			this->store[i] = copy.store[i]->clone();
		}
		else
			this->store[i] = 0;
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy)
{
	this->index = copy.index;
	if (this != &copy)
	{
		for (int i = 0; i < 4; i++)
		{
			delete this->store[i];
			if (copy.store[i])
				this->store[i] = copy.store[i]->clone();
			else
				this->store[i] = 0;
		}	
	}
	return (*this);
}

void    MateriaSource::learnMateria(AMateria *material)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (this->store[i] == 0)
		{
			this->store[i] = material;
			break ;
		}
	}
	if (i > 3)
		std::cout << "Can't Add Materia\n";
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i< 4; i++)
	{
		if (this->store[i] != 0 && this->store[i]->getType() == type)
			return (this->store[i]->clone());
	}
	return (0);
}
