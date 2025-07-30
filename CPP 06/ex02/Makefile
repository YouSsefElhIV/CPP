NAME = Identify
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp Base.cpp A.cpp B.cpp C.cpp functions.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp Base.hpp A.hpp B.hpp C.hpp functions.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all