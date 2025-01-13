NAME = serialization

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Serializer.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ) Serializer.hpp
	$(CC) $(FLAGS) $(OBJ) -o $@

%.o : %.cpp Serializer.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.phony : all clean fclean re
