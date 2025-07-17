# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/15 11:38:44 by yel-haya          #+#    #+#              #
#    Updated: 2025/06/15 18:26:39 by yel-haya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScapTrap
CC = c++
CFLAGS = -Wall -Werror -Wextra  -std=c++98
SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp

OBJ = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp ClapTrap.hpp ScavTrap.hpp
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all