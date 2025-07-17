# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/02 14:42:41 by yel-haya          #+#    #+#              #
#    Updated: 2025/07/08 18:02:57 by yel-haya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = interface
CFLAGS = -Wall -Werror -Wextra -std=c++98
CC = c++
SRCS = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp
OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

%.o: %.cpp AMateria.hpp Character.hpp ICharacter.hpp Cure.hpp Ice.hpp MateriaSource.hpp IMateriaSource.hpp 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all