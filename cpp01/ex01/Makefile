SRCS = Zombie.cpp main.cpp zombieHorde.cpp
OBJS = $(SRCS:.cpp=.o)
HEADERS = Zombie.hpp
NAME = Zombies
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++20

all: $(NAME)

%.o: %.cpp $(HEADERS)
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
		$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -f $(OBJS)
	echo performing obj clean

fclean: clean
	@rm -f $(NAME)
	echo performing full clean

re: fclean all

.PHONY: clean fclean re all