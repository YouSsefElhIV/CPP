/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:25:11 by yel-haya          #+#    #+#             */
/*   Updated: 2025/07/07 10:41:56 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria	*store[4];
		int			index;
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource &copy);
		MateriaSource &operator=(const MateriaSource &copy);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif