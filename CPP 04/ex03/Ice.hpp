/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 16:46:32 by yel-haya          #+#    #+#             */
/*   Updated: 2025/07/06 16:53:37 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		Ice(std::string type);
		~Ice();
		Ice(const Ice &copy);
		Ice &operator=(const Ice &copy);
		Ice* clone() const;
		void use(ICharacter& target);
};

#endif