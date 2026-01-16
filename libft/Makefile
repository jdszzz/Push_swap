# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/06 19:41:12 by albelmon          #+#    #+#              #
#    Updated: 2026/01/16 16:44:47 by albelmon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = 	ft_isalpha.c			ft_isprint.c			ft_isupper.c					\
		ft_islower.c			ft_memset.c				ft_strlcpy.c					\
		ft_bzero.c				ft_isascii.c			ft_memcpy.c						\
		ft_strchr.c				ft_strlen.c				ft_strrchr.c					\
		ft_isalnum.c			ft_isdigit.c			ft_memmove.c					\
		ft_strlcat.c			ft_memchr.c				ft_memcmp.c						\
		ft_atoi.c				ft_calloc.c				ft_strdup.c						\
		ft_substr.c				ft_strjoin.c			ft_strtrim.c					\
		ft_strmapi.c			ft_striteri.c			ft_itoa.c						\
		ft_split.c				ft_dec_to_hex.c			ft_digit_to_char.c				\
		ft_hexlen.c				ft_nbrlen.c				ft_count_words.c				\
		ft_get_substr.c			ft_str_toupper.c		ft_str_tolower.c				\
		ft_putchar_fd.c			ft_putstr_fd.c			ft_putendl_fd.c					\
		ft_putnbr_fd.c			ft_toupper.c			ft_tolower.c					\
		ft_putnbr_unsigned_fd.c	ft_get_ptr_addr.c		ft_is_string_digit.c			\
		ft_atoi_ps.c

BONUS_SRC = ft_lstnew_bonus.c		ft_lstadd_front_bonus.c		ft_lstsize_bonus.c		\
            ft_lstlast_bonus.c		ft_lstadd_back_bonus.c		ft_lstdelone_bonus.c	\
            ft_lstclear_bonus.c		ft_lstiter_bonus.c			ft_lstmap_bonus.c

OBJ = $(SRC:.c=.o)

BONUS_OBJ = $(BONUS_SRC:.c=.o)

all : $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

bonus: $(OBJ) $(BONUS_OBJ)
	ar -rcs $(NAME) $(OBJ) $(BONUS_OBJ)

.o .c:
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

clean :
	rm -f $(OBJ) $(BONUS_OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all