NAME = Interface

CC = clang++
CFLAGS = -g -fsanitize=address,undefined -Wall -Wextra -Werror -std=c++98 -Wshadow
RM = rm -rf

SRCS = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp
INCLUDE = AMateria.hpp Character.hpp Cure.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp

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