/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 12:22:08 by yel-haya          #+#    #+#             */
/*   Updated: 2025/06/05 12:04:34 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
    
}

Contact::~Contact()
{
    
}

std::string Contact::get_firstname()
{
    return (firstName);
}

std::string Contact::get_lastname()
{
    return (lastName);
}

std::string Contact::get_nickname()
{
    return (nickName);
}

std::string Contact::get_number()
{
    return (this->number);
}

std::string Contact::get_secret()
{
    return (this->secret);
}

int Contact::get_empty()
{
    return (empty);
}

void    Contact::set_firstname(std::string firstName)
{
    this->firstName = firstName;
}

void    Contact::set_lastname(std::string lastName)
{
    this->lastName = lastName;
}

void    Contact::set_nickname(std::string nickName)
{
    this->nickName = nickName;
}

void    Contact::set_number(std::string number)
{
    this->number = number;
}

void    Contact::set_secret(std::string secret)
{
    this->secret = secret;
}

void		Contact::set_empty(int empty)
{
    this->empty = empty;
}
