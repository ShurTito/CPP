NAME = ClapTrap

CC = clang++
CFLAGS = -g -fsanitize=address,undefined -Wall -Wextra -Werror -std=c++98
RM = rm -rf

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp
INCLUDE = ClapTrap.hpp ScavTrap.hpp

OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS) $(INCLUDE)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJS):	./%.o : ./%.cpp $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
			$(RM) $(OBJS)

fclean:
			$(RM) $(NAME) $(OBJS)

re : fclean all

.PHONY : all re clean fclean