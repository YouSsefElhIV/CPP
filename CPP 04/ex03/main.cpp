/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 16:59:48 by yel-haya          #+#    #+#             */
/*   Updated: 2025/07/09 13:20:37 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main() 
{
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		AMateria* tmp2;
		AMateria* tmp3;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		tmp2 = src->createMateria("bbb");
		me->equip(tmp2);
		tmp3 = src->createMateria("ice");
		me->equip(tmp3);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		me->use(2, *bob);
		me->use(3, *bob);

		std::cout << std::endl;

		delete bob;
		delete me;
		delete src;
	}
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

			ICharacter* player1 = new Character("player1");
		ICharacter* player2 = new Character("player2");
		AMateria*	ice;
		AMateria*	ice2;
		AMateria*	cure;
		AMateria*	blabla;
		
		ice = src->createMateria("ice");
		player1->equip(ice);
		ice2 = src->createMateria("cure");
		player1->equip(ice2);
		blabla = src->createMateria("BLABLA");
		player1->equip(blabla);
		cure = src->createMateria("cure");
		player1->equip(cure);

		player1->use(0, *player2);
		player1->use(1, *player2);
		player1->use(2, *player2);
		player1->use(3, *player2);
		
		player1->unequip(0);
		delete ice;
		player1->unequip(1);
		delete ice2;
		player1->unequip(2);
		delete blabla;
		player1->unequip(3);
		delete cure;
		
		player1->use(0, *player2);
		player1->use(1, *player2);
		player1->use(2, *player2);
		player1->use(3, *player2);
		
		delete src;
		delete player1;
		delete player2;
		return (0); 
	}
}
