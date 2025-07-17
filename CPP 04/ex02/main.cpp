/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 16:59:48 by yel-haya          #+#    #+#             */
/*   Updated: 2025/07/05 16:11:12 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{	
	const Animal* tab[6];

	std::cout << "\n\n";
	for(int i = 0;i < 6;i++)
	{
		if (i < 3)
			tab[i] = new Cat();
		else
			tab[i] = new Dog();
	}

	std::cout << "\n 	Test for getType\n";
	for(int i = 0; i < 6; i++)
	{
		std::cout << tab[i]->getType() << "\n";
	}

	std::cout << "\n 	Test for Make Sound\n";
	for(int i = 0; i < 6; i++)
	{
		tab[i]->makeSound();
	}
	std::cout << "\n 	Test for Deep copy\n";

	Dog *dog = new Dog();
	Dog dog_copy(*dog);
	std::cout << "\n";

	dog->makeSound();
	dog_copy.makeSound();

	dog->set_brain(0, "this is dog's idea 1");
	dog->set_brain(1, "this is dog's idea 2");
	dog->set_brain(2, "this is dog's idea 3");

	std::cout << dog->get_brain(0) << "\n";
	std::cout << dog->get_brain(1) << "\n";
	std::cout << dog->get_brain(2) << "\n";
	std::cout << dog->get_brain(3) << "\n";

	std::cout << dog_copy.get_brain(0) << "\n";
	std::cout << dog_copy.get_brain(1) << "\n";
	std::cout << dog_copy.get_brain(2) << "\n";
	std::cout << dog_copy.get_brain(3) << "\n";


	Cat *cat = new Cat();

	cat->makeSound();

	cat->set_brain(0, "this is cat's idea 1");
	cat->set_brain(1, "this is cat's idea 2");
	cat->set_brain(2, "this is cat's idea 3");

	std::cout << cat->get_brain(0) << "\n";
	std::cout << cat->get_brain(1) << "\n";
	std::cout << cat->get_brain(2) << "\n";
	std::cout << cat->get_brain(3) << "\n";
	
	std::cout << "Now lets create another object cat and test deep copy\n";
	Cat	cat_copy(*cat);

	std::cout << cat->get_brain(0) << "\n";
	std::cout << cat->get_brain(1) << "\n";
	std::cout << cat->get_brain(2) << "\n";
	std::cout << cat->get_brain(3) << "\n";
	std::cout << "now if we change on one of them the otehr would stay intact\n";
	cat->set_brain(0, "i changed my mind");
	
	std::cout << cat->get_brain(0) << "\n";
	std::cout << cat_copy.get_brain(0) << "\n";
	std::cout << "\n";
	for(int i = 0; i < 6; i++)
	{
		delete tab[i];
	}   
	delete cat;
	delete dog;
	return (0);
}
