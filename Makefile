# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: pdruart <pdruart@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/01 18:16:09 by pdruart       #+#    #+#                  #
#    Updated: 2020/11/01 18:16:18 by pdruart       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = Libft
OBJ_FILES = main_strncmp.o ft_strncmp.o ft_isprint.o ft_strnstr.o ft_strlcpy.o ft_strlcat.o ft_strrchr.o ft_strchr.o ft_strlen.o ft_isdigit.o ft_isalpha.o ft_isalnum.o ft_isascii.o ft_tolower.o ft_toupper.o
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