# Variables
CC = cc -Wall -Wextra -Werror
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c
OBJS = $(SRCS:.c=.o)
NAME = libft.a
INC_DIR = ./

# Targets
all: $(NAME) main

$(NAME): $(OBJS)
	echo "Creating library $(NAME)"
	ar rcs $(NAME) $(OBJS)

main: main.o $(NAME)
	echo "Linking main"
	$(CC) -o main main.o -L. -lft

clean:
	echo "Cleaning object files"
	rm -f $(OBJS) main.o

fclean: clean
	echo "Removing library $(NAME)"
	rm -f $(NAME)
	rm -f main

re: fclean all

# Compile object files
%.o: %.c
	echo "Compiling $< into $@"
	$(CC) -I$(INC_DIR) -c $< -o $@
