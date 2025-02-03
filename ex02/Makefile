NAME        = Animal
CC          = c++
CFLAGS      = -Wall -Wextra -Werror -std=c++98

SRC         = main.cpp AAnimal.cpp Cat.cpp Dog.cpp Brain.cpp
OBJ         = $(SRC:.cpp=.o)

GREEN       = \033[1;32m
YELLOW      = \033[1;33m
RESET       = \033[0m
RED         = \033[1;31m

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	@echo "$(GREEN)EXECUTABLE CREATED: $(NAME)$(RESET)"

%.o: %.cpp AAnimal.hpp Cat.hpp Dog.hpp Brain.hpp
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(YELLOW)COMPILED: $<$(RESET)"

clean:
	@rm -f $(OBJ)
	@echo "$(RED)OBJECT FILES REMOVED$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)EXECUTABLE REMOVED$(RESET)"

re: fclean all
