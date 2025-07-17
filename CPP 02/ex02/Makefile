# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/11 18:43:16 by yel-haya          #+#    #+#              #
#    Updated: 2025/06/11 18:43:21 by yel-haya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FixedPointNumbers
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = main.cpp Fixed.cpp

OBJ = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp Fixed.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all