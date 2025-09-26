CC = cc
INCLUDE_DIR = include
CFLAGS := -Wall -Werror -Wextra -I./$(INCLUDE_DIR)
NAME = libft.a
SRCS_DIR = src
SRCS := $(wildcard $(SRCS_DIR)/*.c)
OBJS := $(SRCS:.c=.o)

TEST_NAME = test.out
TEST_DIR = test
TEST_SRCS := $(wildcard $(TEST_DIR)/*.c)
TEST_OBJS := $(TEST_SRCS:.c=.o)
TEST_FLAGS = -L. -lft

$(NAME): $(OBJS)
	ar -rcs $@ $^

$(TEST_NAME): $(NAME) $(TEST_OBJS)
	$(CC) $(TEST_FLAGS) $(TEST_OBJS) -o $@

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

test: CFLAGS += -g
test: $(TEST_NAME)
	./$(TEST_NAME)

all: $(NAME)

clean:
	rm -f $(OBJS) $(TEST_OBJS)

fclean: clean
	rm -f $(NAME) $(TEST_NAME)

re: fclean all

.PHONY: test all clean fclean re
