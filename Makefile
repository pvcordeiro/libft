CC = cc -Wall -Wextra -Werror
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_substr.c ft_strjoin.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_strtrim.c ft_split.c
OBJS = $(SRCS:.c=.o)
NAME = libft.a

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

compile: $(OBJS)
	@echo "\nCompiling .c files into .o files\n"

all: $(NAME) compile
	@echo "\nCreating library $(NAME)\n"
# comment this below before sending
test: $(NAME)
	@echo "\nCompiling main with $(NAME)\n"
	@$(CC) main.c $(NAME) -lbsd -o test
	@echo "\n\n\t\t\tTests bellow\n\n\n"
	@./test
	@rm -f $(OBJS)
# ^^^^^^^^^
clean:
	@echo "\nCleaning object files\n"
	@rm -f $(OBJS)

fclean: clean
	@echo "\nRemoving library $(NAME) and object files\n"
	@rm -f $(NAME) main.o test
#     remove main.o ^ test ^
re: fclean all test
#   remove test ^
$(OBJS): %.o: %.c
	@$(CC) -I. -c $< -o $@