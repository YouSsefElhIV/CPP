/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 19:47:00 by yel-haya          #+#    #+#             */
/*   Updated: 2025/06/12 10:16:52 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include "Contact.hpp"
#include <cstdlib>
#include <limits>
#include <cstdio>
#include <cmath>
#include <string>
#include <cctype>

class PhoneBook
{
	private:
		Contact contacts[8];
	public:
		PhoneBook();
		~PhoneBook();
        void    adding(std::string firstName, std::string lastName, std::string nickName, std::string number, std::string secret);
        void    searching(void);
};
#endif