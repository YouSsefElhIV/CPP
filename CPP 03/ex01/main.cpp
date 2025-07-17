/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:14:14 by yel-haya          #+#    #+#             */
/*   Updated: 2025/06/15 17:14:16 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int can_attack_heal = 0;

int main()
{
	ScavTrap robot1("robot1");
	ScavTrap robot2("robot2");

	std::cout << "\n";
	robot1.attack("robot2");
	if (can_attack_heal == 1)
		robot2.takeDamage(20);
	robot2.guardGate();
 	for (int i = 0; i < 9; i++)
	{
		std::cout << "\033[33m";
		robot1.attack("robot2");
		if (can_attack_heal == 1)
			robot2.takeDamage(20);
		std::cout << "\033[0m";
	}
	robot2.beRepaired(20);
	std::cout << "\033[33m";
	robot1.attack("robot2");
	if (can_attack_heal == 1)
		robot2.takeDamage(20);
	std::cout << "\033[0m";
	robot2.guardGate();
	robot1.guardGate();
	std::cout << "\n";

}