/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 13:51:09 by yel-haya          #+#    #+#             */
/*   Updated: 2025/06/15 18:08:21 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int can_attack_heal = 0;

int main()
{
	DiamondTrap diamond1("diamond1");
	DiamondTrap diamond2("diamond2");

	std::cout << "\n";
	diamond1.attack("diamond2");
	if (can_attack_heal == 1)
		diamond2.takeDamage(20);
	diamond1.whoAmI();
	diamond2.whoAmI();
	// diamond2.highFivesGuys();
 	// for (int i = 0; i < 9; i++)
	// {
	// 	std::cout << "\033[33m";
	// 	diamond1.attack("diamond2");
	// 	if (can_attack_heal == 1)
	// 		diamond2.takeDamage(20);
	// 	std::cout << "\033[0m";
	// }
	// diamond2.beRepaired(20);
	// std::cout << "\033[33m";
	// diamond1.attack("diamond2");
	// if (can_attack_heal == 1)
	// 	diamond2.takeDamage(20);
	// std::cout << "\033[0m";
	// diamond2.highFivesGuys();
	// diamond1.highFivesGuys();
	std::cout << "\n";

}