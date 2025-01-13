NAME = realType

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Base.cpp main.cpp

HEADERS = Base.hpp A.hpp B.hpp C.hpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ) $(HEADERS)
	$(CC) $(FLAGS) $(OBJ) -o $@

%.o : %.cpp $(HEADERS)
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.phony : all clean fclean re
