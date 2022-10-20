# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: klertrat <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/27 10:23:24 by klertrat          #+#    #+#              #
#    Updated: 2022/10/20 12:50:57 by klertrat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS =	ft_strrchr.c\
	ft_strtrim.c\
	ft_strlen.c\
	ft_isalpha.c\
	ft_strchr.c\
	ft_memmove.c\
	ft_strjoin.c\
	ft_substr.c\
	ft_isdigit.c\
	ft_tolower.c\
	ft_toupper.c\
	ft_isalnum.c\
	ft_isascii.c\
	ft_isprint.c\
	ft_putchar_fd.c\
	ft_putstr_fd.c\
	ft_split.c\
	ft_memset.c\
	ft_bzero.c\
	ft_calloc.c\
	ft_putnbr_fd.c\
	ft_putendl_fd.c\
	ft_memcpy.c\
	ft_itoa.c\
	ft_atoi.c\
	ft_memcmp.c\
	ft_memchr.c\
	ft_strdup.c\
	ft_strncmp.c\
	ft_strnstr.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

%o: %c
	gcc $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re