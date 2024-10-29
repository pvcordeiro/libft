# Variables
CC = cc -Wall -Wextra -Werror
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_substr.c ft_strjoin.c ft_putchar_fd.c ft_putstr_fd.c
OBJS = $(SRCS:.c=.o)
NAME = libft.a

# Targets
all: $(NAME)

$(NAME): $(OBJS)
	@echo "Creating library $(NAME)\n"
	@ar rcs $(NAME) $(OBJS)

# remove this before sending
test: $(NAME)
	@echo "Compiling main into .o and linking it\n"
	@$(CC) -I. -c main.c -o main.o
	@$(CC) -o test main.o -L. -lft -lbsd
	@echo "\n\n            Tests bellow\n\n\n"
	@./test
# ^^^^^^^^^
clean:
	@echo "Cleaning object files\n"
	@rm -f $(OBJS)

fclean: clean
	@echo "Removing library $(NAME) and object files\n"
	@rm -f $(NAME) main.o test
#        remove this ^     ^

re: fclean all test
#remove this    ^
# Compile object files
%.o: %.c
	@echo "Compiling $< into $@"
	@$(CC) -I. -c $< -o $@
