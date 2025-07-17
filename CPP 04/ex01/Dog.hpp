/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 17:03:20 by yel-haya          #+#    #+#             */
/*   Updated: 2025/07/05 15:18:07 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	private:
		Brain *brain;
	public:
		Dog();
		~Dog();
		Dog(const Dog &copy);
		Dog &operator=(const Dog &copy);
        void    makeSound() const;
		std::string get_brain(int index);
		void	set_brain(int index, std::string idea);
};

#endif