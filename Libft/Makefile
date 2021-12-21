# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: erenae <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/13 14:39:28 by erenae            #+#    #+#              #
#    Updated: 2021/10/17 16:09:49 by erenae           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	= 	ft_strlen.c\
			ft_isdigit.c\
			ft_isalpha.c\
			ft_isalnum.c\
			ft_isascii.c\
			ft_isprint.c\
			ft_tolower.c\
			ft_toupper.c\
			ft_atoi.c\
			ft_memcmp.c\
			ft_strncmp.c\
			ft_itoa.c\
			ft_strdup.c\
			ft_strjoin.c\
			ft_strchr.c\
			ft_strtrim.c\
			ft_strrchr.c\
			ft_strnstr.c\
			ft_substr.c\
			ft_strmapi.c\
			ft_putchar_fd.c\
			ft_putstr_fd.c\
			ft_putendl_fd.c\
			ft_putnbr_fd.c\
			ft_bzero.c\
			ft_calloc.c\
			ft_striteri.c\
			ft_memset.c\
			ft_memchr.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_strlcpy.c\
			ft_strlcat.c\
			ft_split.c\
			get_next_line.c

OBJ		=	$(SRCS:.c=.o)

OBJ_B	=	$(SRCS_B:.c=.o)

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

.PHONY	:	all clean fclean re bonus

$(NAME)	:	$(OBJ) libft.h get_next_line.h
	ar rcs $(NAME) $(OBJ)

%.o: %.c libft.h get_next_line.h
	$(CC) $(CFLAGS) -c $< -o $@

all:	$(NAME)

bonus:	
	make OBJ="$(OBJ_B)" all

clean:
	$(RM) $(OBJ) $(OBJ_B)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
