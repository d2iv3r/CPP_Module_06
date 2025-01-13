NAME = convert

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = ScalarConverter.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ) ScalarConverter.hpp
	$(CC) $(FLAGS) $(OBJ) -o $@

%.o : %.cpp ScalarConverter.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.phony : all clean fclean re
