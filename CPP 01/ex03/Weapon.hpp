/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 12:32:44 by yel-haya          #+#    #+#             */
/*   Updated: 2025/06/13 09:57:12 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
	
	private:
		std::string type;
	
	public:
		Weapon();
		Weapon(std::string);
		~Weapon();
		std::string getType();
		void		setType(std::string type);
};

#endif