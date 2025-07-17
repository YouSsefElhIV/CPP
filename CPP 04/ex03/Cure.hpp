/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 16:52:54 by yel-haya          #+#    #+#             */
/*   Updated: 2025/07/05 17:02:50 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		Cure(std::string type);
		~Cure();
		Cure(const Cure &copy);
		Cure &operator=(const Cure &copy);
		Cure* clone() const;
		void use(ICharacter& target);
};

#endif