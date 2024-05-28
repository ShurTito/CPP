NAME = Replace

CC = clang++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

SRCS = main.cpp Replace.cpp
INCLUDE = Replace.hpp

OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS) $(INCLUDE)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

$(OBJS):	./%.o : ./%.cpp $(INCLUDE)
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

clean:
			$(RM) $(OBJS)

fclean:
			$(RM) $(NAME) $(OBJS)

re : fclean all

.PHONY : all re clean fclean