# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/16 00:41:04 by albelmon          #+#    #+#              #
#    Updated: 2026/02/03 16:17:39 by albelmon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= push_swap

LIBFT_DIR= libft
LIBFT = $(LIBFT_DIR)/libft.a

CC= cc
CFLAGS= -Wall -Werror -Wextra -g

SRC=		error.c			\
			ksort_utils.c	\
			ksort.c			\
			movements.c		\
			movements2.c	\
			parsing.c		\
			push_swap.c		\
			stack_utils.c	\
			main.c			\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ) push_swap.h
	$(CC) $(OBJ) $(LIBFT) -o $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)
	cp $(LIBFT) $(NAME)

%.o: %.c push_swap.h
	$(CC) $(CFLAGS) -o $@ $< -c

clean:
	rm -f $(OBJ)
	$(MAKE) fclean -C $(LIBFT_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.DEFAULT_GOAL: all

.PHONY: all clean fclean re