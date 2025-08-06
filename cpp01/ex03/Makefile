SRCS = HumanA.cpp HumanB.cpp main.cpp Weapon.cpp
OBJS = $(SRCS:.cpp=.o)
HEADERS = HumanA.hpp HumanB.hpp Weapon.hpp
NAME = violence
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++20

all: $(NAME)

%.o: %.cpp $(HEADERS)
	$(CC) $(FLAGS) -I $(HEADERS) -c $< -o $@

$(NAME): $(OBJS)
		$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean flcean re all