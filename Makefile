# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpostada <jpostada@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/30 21:18:32 by jpostada          #+#    #+#              #
#    Updated: 2024/02/08 17:44:38 by jpostada         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRC =ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c ft_striteri.c ft_strmapi.c ft_itoa.c ft_split.c ft_strtrim.c ft_strjoin.c ft_substr.c ft_strdup.c ft_calloc.c ft_atoi.c ft_strnstr.c ft_memcmp.c ft_memchr.c ft_strncmp.c ft_strrchr.c ft_strchr.c ft_tolower.c ft_toupper.c ft_strlcat.c ft_strlcpy.c ft_memmove.c ft_memcpy.c ft_bzero.c ft_memset.c ft_strlen.c ft_isascii.c ft_isprint.c ft_isalnum.c ft_isdigit.c ft_isalpha.c
FILES = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(FILES)
	@ar rc $(NAME) $(FILES)
	@echo "$(NAME) created"

%.o: %.c Makefile
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "Removing object files"
	@rm -rf $(FILES)

fclean: clean
	@echo "Removing $(NAME)"
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
