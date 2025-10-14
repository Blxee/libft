CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = ft_isalpha.c ft_isdigit.c ft_isprint.c ft_tolower.c ft_toupper.c
OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	ar -rcs $@ $^

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

all: $(NAME)

clean: $(OBJS)
	rm -f $^

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
