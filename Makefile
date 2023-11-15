# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/27 16:56:34 by asohrabi          #+#    #+#              #
#    Updated: 2023/11/13 08:55:39 by asohrabi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FUNC = ft_printf_utils.c \
			ft_putnbr.c \
			ft_puthex.c \
			ft_uns_putnbr.c \
			ft_putpoint.c \
			ft_printf.c \

OBJ = ${FUNC:.c=.o}

CFLAGS = -Wall -Wextra -Werror

%.o: %.c
	cc ${CFLAGS} -c $< -o $@

all: ${NAME}

${NAME}: ${OBJ}	
	ar -crs ${NAME} ${OBJ}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all, clean, fclean, re