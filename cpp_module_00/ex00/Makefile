NAME =	megaphone
FLAGS =	-Wall -Wextra -Werror
CC =	clang++
SRCS =	megaphone.cpp
OBJS =	$(SRCS:.cpp=.o)

all: $(NAME)
$(NAME): $(OBJS)
	$(CC) $(FLAGS) $^ -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -o $@ -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
