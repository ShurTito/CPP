NAME = Polymorph

CC = clang++
CFLAGS = -g -fsanitize=address,undefined -Wall -Wextra -Werror -std=c++98 -Wshadow
RM = rm -rf

SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
INCLUDE = Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp

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