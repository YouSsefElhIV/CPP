/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:00:03 by yel-haya          #+#    #+#             */
/*   Updated: 2025/07/07 17:59:15 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

class Character: public ICharacter
{
	private:
		AMateria *inventory[4];
		std::string name;
		int			inv_index;
	public:
		Character();
		~Character();
		Character(std::string name);
		Character(const Character &copy);
		Character &operator=(const Character &copy);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};
