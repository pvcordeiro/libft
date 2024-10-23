# Variables
CC = cc -Wall -Wextra -Werror
SRCS = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
OBJS = $(SRCS:.c=.o)
NAME = libft.a

# Targets
all: $(NAME)

$(NAME): $(OBJS)
	echo "Creating library $(NAME)"
	ar rcs $(NAME) $(OBJS)

clean:
	echo "Cleaning object files"
	rm -f $(OBJS)

fclean: clean
	echo "Removing library $(NAME)"
	rm -f $(NAME)

re: fclean all

# Compile object files
%.o: %.c
	echo "Compiling $< into $@"
	$(CC) -I$(INC_DIR) -c $< -o $@
