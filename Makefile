CC = cc
NAME = libft.a
SRCS = ft_isalpha.c
OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	ar -rcs $@ $^

%.o: %.c
	$(CC) -c $< -o $@

all: $(NAME)

clean: $(OBJS)
	rm -f $^

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
