NAME = Bureau
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp \
RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp Bureaucrat.hpp AForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp ShrubberyCreationForm.hpp Intern.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all