# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: pdruart <pdruart@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/01 18:16:09 by pdruart       #+#    #+#                  #
#    Updated: 2020/11/07 19:10:20 by pdruart       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
OBJ_FILES = ft_strdup.o ft_calloc.o ft_memcmp.o ft_memchr.o ft_memmove.o ft_memccpy.o ft_memcpy.o ft_bzero.o ft_atoi.o ft_strncmp.o ft_isprint.o ft_strnstr.o ft_strlcpy.o ft_strlcat.o ft_strrchr.o ft_strchr.o ft_strlen.o ft_isdigit.o ft_isalpha.o ft_isalnum.o ft_isascii.o ft_tolower.o ft_toupper.o
HEADER_FILES = libft.h
CFLAGS = -Wall -Werror -Wextra
MAIN = main_strdup.c

all: $(NAME)

$(NAME): $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)

%.o: %.c $(HEADER_FILES)
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)
	rm -f a.out

re: fclean all

main: $(NAME) $(MAIN)
	$(CC) $(CFLAGS) -o a.out $(MAIN) libft.a

.PHONY: all clean fclean re main