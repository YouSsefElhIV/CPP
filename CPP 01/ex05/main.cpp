/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 18:53:49 by yel-haya          #+#    #+#             */
/*   Updated: 2025/06/07 19:12:06 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main ()
{
    Harl h;

    std::cout << "---------------------------------------\n";
    std::cout<< "[DEBUG]\n";
    h.complain("DEBUG");
    
    std::cout<< "[INFO]\n";
    h.complain("INFO");
    
    std::cout<< "[WARNING]\n";
    h.complain("WARNING");
    
    std::cout<< "[ERROR]\n";
    h.complain("ERROR");
    
    std::cout<< "[RANDOM]\n";
    h.complain("BS");
    std::cout << "---------------------------------------\n";
    return (0);
}
