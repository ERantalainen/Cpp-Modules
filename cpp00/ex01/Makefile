# Reset
OFF='\033[0m'

# Regular Colors
BLACK='\033[0;30m'
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[0;33m'
BLUE='\033[0;34m'
PURPLE='\033[0;35m'
CYAN='\033[0;36m'
WHITE='\033[0;37m'

SRCS = Contacts.cpp Phonebook.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++20
NAME = Phonebook

all: $(NAME)

%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@
	@echo $(GREEN) Compiling obj files $(OFF)

$(NAME): $(OBJS)
		@$(CC) $(FLAGS) $(OBJS) -o $(NAME)
		@echo $(GREEN) Compiling
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean flcean re all