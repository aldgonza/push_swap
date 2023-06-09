# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aldgonza <aldgonza@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/13 17:28:12 by aldgonza          #+#    #+#              #
#    Updated: 2023/04/17 17:43:40 by aldgonza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
HEADER	= include/ft_printf.h
SRCS	= src/ft_printf.c \
		src/ft_utils.c \
		libft_printf/ft_putstr_fd_print.c \
		libft_printf/ft_putnbr_fd_print.c \
		libft_printf/ft_putchar_fd_print.c \
		libft_printf/ft_strlen_print.c \
		src/ft_print_p.c \
		src/ft_print_uint.c \
		src/ft_hex.c \
		src/ft_printx.c \

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -g
OBJS	= ${SRCS:%.c=%.o}

%.o: %.c $(HEADER)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo Creating object: $@

$(NAME): ${HEADER} ${OBJS}
		@ar rc $(NAME) $(OBJS)
		@echo Compiling library: $(NAME)

.PHONY: all clean fclean re

all: $(NAME)

clean:
	@echo Deleting Objects $(OBJS)
	@rm -f $(OBJS)

fclean: clean
	@echo Deleting Library $(NAME)
	@rm -f $(NAME)

re: fclean all
