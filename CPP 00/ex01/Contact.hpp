/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 19:46:40 by yel-haya          #+#    #+#             */
/*   Updated: 2025/06/05 12:04:36 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string number;
		std::string secret;
		int empty;
    public:
		std::string get_firstname();
		std::string get_lastname();
		std::string get_nickname();
		std::string get_number();
		std::string get_secret();
		int			get_empty();
		void		set_firstname(std::string firstName);
		void		set_lastname(std::string lastName);
		void		set_nickname(std::string nickName);
		void		set_number(std::string number);
		void		set_secret(std::string secret);
		void		set_empty(int empty);
        Contact();
        ~Contact();
};

#endif