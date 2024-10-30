CC = cc -Wall -Wextra -Werror
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_substr.c ft_strjoin.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c
OBJS = $(SRCS:.c=.o)
NAME = libft.a

all: $(NAME) compile
	@echo "\nCreating library $(NAME)\n"

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
# remove this below before sending
test: $(NAME)
	@echo "\nCompiling main into .o and linking it\n"
	@$(CC) -I. -c main.c -o main.o
	@$(CC) main.o -L. -lft -lbsd -o test
	@echo "\n\n            Tests bellow\n\n\n"
	@./test
# ^^^^^^^^^
clean:
	@echo "\nCleaning object files\n"
	@rm -f $(OBJS)

fclean: clean
	@echo "\nRemoving library $(NAME) and object files\n"
	@rm -f $(NAME) main.o test
#        remove this ^     ^
re: fclean all test
#remove this    ^
$(OBJS): %.o: %.c
	@$(CC) -I. -c $< -o $@

compile: $(OBJS)
	@echo "\nCompiling .c files into .o files\n"
