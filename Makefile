# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: pdruart <pdruart@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/01 18:16:09 by pdruart       #+#    #+#                  #
#    Updated: 2020/11/14 17:43:12 by pdruart       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CHAR_CHECKS =  ft_isdigit.o ft_isalpha.o ft_isalnum.o ft_isascii.o ft_isprint.o
MEMS = ft_memset.o ft_memcmp.o ft_memchr.o ft_memmove.o ft_memccpy.o ft_memcpy.o
STR_MOD = ft_strlcpy.o ft_strlcat.o ft_tolower.o ft_toupper.o ft_bzero.o
STR_INFO = ft_strlen.o ft_strncmp.o ft_strnstr.o ft_strrchr.o ft_strchr.o
STR_MAKE = ft_strdup.o ft_calloc.o ft_atoi.o
PART_ONE = $(CHAR_CHECKS) $(MEMS) $(STR_MOD) $(STR_INFO) $(STR_MAKE)
PAGE1 = ft_substr.o ft_strjoin.o ft_strtrim.o
PAGE2 = ft_split.o ft_itoa.o ft_strmapi.o
PUTS = ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o
PART_TWO = $(PAGE1) $(PAGE2) $(PUTS)
OBJ_FILES = $(PART_ONE) $(PART_TWO)
HEADER_FILES = libft.h
CFLAGS = -Wall -Werror -Wextra
MAIN = main_memset.c

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
