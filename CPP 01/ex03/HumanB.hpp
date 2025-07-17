/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 12:38:20 by yel-haya          #+#    #+#             */
/*   Updated: 2025/06/07 15:59:48 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon* wp;
	public:
		int has_weapon;
		HumanB();
		~HumanB();
		HumanB(std::string name);
		void	attack();
		void	setName(std::string name);
		void	setWeapon(Weapon& wp);
		std::string	getName();
};

#endif