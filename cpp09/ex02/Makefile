NAME = PmergeMe

CC = clang++
CFLAGS = -g -fsanitize=address,undefined -Wall -Wextra -Werror -std=c++98
RM = rm -rf

SRCS = main.cpp PmergeMe.cpp

OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJS):	./%.o : ./%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
			$(RM) $(OBJS)

fclean:
			$(RM) $(NAME) $(OBJS)

re : fclean all

.PHONY : all re clean fclean