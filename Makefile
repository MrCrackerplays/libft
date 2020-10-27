NAME = Libft
OBJ_FILES = main_isalpha.o ft_isalpha.o ft_isalnum.o ft_isascii.o ft_tolower.o ft_toupper.o
HEADER_FILES = libft.h
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ_FILES)
	$(CC) -o $@ $^

%.o: %.c $(HEADER_FILES)
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re