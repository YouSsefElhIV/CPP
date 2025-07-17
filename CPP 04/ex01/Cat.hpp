/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 17:03:12 by yel-haya          #+#    #+#             */
/*   Updated: 2025/07/05 15:43:26 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	private:
		Brain *brain;
	public:
		Cat();
		~Cat();
		Cat(const Cat &copy);
		Cat &operator=(const Cat &copy);
        void    makeSound() const;
		std::string get_brain(int index);
		void	set_brain(int index, std::string idea);
};

#endif