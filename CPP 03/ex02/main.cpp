/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 13:51:09 by yel-haya          #+#    #+#             */
/*   Updated: 2025/06/15 17:30:56 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int can_attack_heal = 0;

int main()
{
	FragTrap frog1("frog1");
	FragTrap frog2("frog2");

	std::cout << "\n";
	frog1.attack("frog2");
	if (can_attack_heal == 1)
		frog2.takeDamage(20);
	frog2.highFivesGuys();
 	for (int i = 0; i < 9; i++)
	{
		std::cout << "\033[33m";
		frog1.attack("frog2");
		if (can_attack_heal == 1)
			frog2.takeDamage(20);
		std::cout << "\033[0m";
	}
	frog2.beRepaired(20);
	std::cout << "\033[33m";
	frog1.attack("frog2");
	if (can_attack_heal == 1)
		frog2.takeDamage(20);
	std::cout << "\033[0m";
	frog2.highFivesGuys();
	frog1.highFivesGuys();
	std::cout << "\n";

}