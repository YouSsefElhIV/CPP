# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/02 14:42:41 by yel-haya          #+#    #+#              #
#    Updated: 2025/07/02 17:22:58 by yel-haya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Polymorphism
CFLAGS = -Wall -Werror -Wextra -std=c++98
CC = c++
SRCS = main.cpp WrongAnimal.cpp Animal.cpp Cat.cpp Dog.cpp WrongCat.cpp
OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

%.o: %.cpp Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all