NAME = weapon

SRC = main.cpp \
	  Weapon.cpp \
	  HumanA.cpp \
	  HumanB.cpp \


HEADERS_DIRECTORY 	= ./include/

HEADERS 			= $(addprefix $(HEADERS_DIRECTORY), $(HEADERS_FILES))

HEADERS_FILES 		= Weapon.hpp \
					  HumanA.hpp \
					  HumanB.hpp \


OBJ_DIRECTORY = ./obj/

OBJ = $(addprefix $(OBJ_DIRECTORY), $(SRC:.cpp=.o))

CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ_DIRECTORY) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIRECTORY):
	mkdir -p $(OBJ_DIRECTORY)

$(OBJ_DIRECTORY)%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIRECTORY)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re