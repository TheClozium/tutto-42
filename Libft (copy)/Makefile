# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: socloza <socloza@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 18:01:56 by socloza           #+#    #+#              #
#    Updated: 2023/11/06 18:06:41 by socloza          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HNAME = libft.h
CC = cc
CFLAGS = -Wall -Wextra -Werror
COMPILE = $(CC) $(CFLAGS) -c
ARCHIVE = ar rc $(NAME)
RANLIB = ranlib $(NAME)

SRC =	./ft_isalpha.c \
		./ft_isdigit.c \
		./ft_isalnum.c \
		./ft_isascii.c \
		./ft_isprint.c \
		./ft_strlen.c \
		./ft_memset.c \
		./ft_bzero.c \
		./ft_memcpy.c \
		./ft_strlcpy.c \
		./ft_memchr.c \
		./ft_strlcat.c \
		./ft_strlen.c \
		./ft_toupper.c \
		./ft_tolower.c \
		./ft_memmove.c \
		./ft_strchr.c \
		./ft_strrchr.c \
		./ft_strncmp.c \
		./ft_memcmp.c \
		./ft_strnstr.c \
		./ft_atoi.c \
		./ft_calloc.c \
		./ft_strdup.c \
		./ft_itoa.c \
		./ft_substr.c \
		./ft_strjoin.c \
		./ft_putchar_fd.c \
		./ft_putstr_fd.c \
		./ft_putendl_fd.c \
		./ft_split.c \
		./ft_strmapi.c \
		./ft_putnbr_fd.c \
		./ft_striteri.c

OBJ = ${SRC:.c=.o}

all: $(NAME)

$(NAME): $(OBJ) $(HNAME)
	@$(COMPILE) $(SRC)
	@$(ARCHIVE) $(OBJ)
	@$(RANLIB)

RM = rm -f

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
