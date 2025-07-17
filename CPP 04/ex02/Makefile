# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/02 14:42:41 by yel-haya          #+#    #+#              #
#    Updated: 2025/07/05 16:03:21 by yel-haya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = abstraction
CFLAGS = -Wall -Werror -Wextra -std=c++98
CC = c++
SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp
OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

%.o: %.cpp Animal.hpp Cat.hpp Dog.hpp Brain.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all