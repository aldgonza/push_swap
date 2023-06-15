# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aldgonza <aldgonza@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/11 15:12:10 by aldgonza          #+#    #+#              #
#    Updated: 2023/04/18 18:09:24 by aldgonza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap

HEADER	= include/push_swap.h

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror -g

SRCS	= src/main.c \
		src/push_swap.c \
		\
		
DEP		= dep/Libft/libft.a \
		dep/Printf/libftprintf.a \
		\


OBJS	= ${SRCS:%.c=%.o}

%.o: %.c $(HEADER)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo Creating objects: $@

$(NAME): ${HEADER} ${OBJS} $(DEP)
		@$(CC) $(CFLAGS) $(SRCS) $(DEP) -o $(NAME)
		@echo Compiling: $(NAME)

.PHONY: all clean fclean re

all: $(NAME)

$(DEP):
	@make -C dep/Libft
	@make bonus -C dep/Libft
	@make -C dep/Printf
	
clean:
	@echo Deleting Objects: $(OBJS)
	@rm -f $(OBJS)
	@make clean -C dep/Libft
	@make clean -C dep/Printf

fclean: clean
	@echo Deleting Server: $(NAME)
	@rm -f $(NAME)
	@make fclean -C dep/Libft
	@make fclean -C dep/Printf

re: fclean all
