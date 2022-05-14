# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: med-doba <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/17 17:41:58 by med-doba          #+#    #+#              #
#    Updated: 2022/04/28 00:46:43 by med-doba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NOM = libft.a

CC = gcc
HEADER = libft.h
FLAGS = -Wall -Wextra -Werror

FCT = ft_atoi.c ft_itoa.c ft_putendl_fd.c ft_strlcat.c ft_strtrim.c \
	  ft_bzero.c ft_memchr.c ft_putnbr_fd.c	ft_strlcpy.c ft_substr.c \
	  ft_calloc.c ft_memcmp.c ft_putstr_fd.c ft_strlen.c ft_tolower.c \
	  ft_isalnum.c ft_memcpy.c ft_split.c ft_strmapi.c ft_toupper.c\
	  ft_isalpha.c ft_strchr.c ft_strncmp.c ft_isascii.c ft_memmove.c\
	  ft_strdup.c ft_strnstr.c ft_isdigit.c ft_memset.c ft_striteri.c\
	  ft_strrchr.c ft_isprint.c ft_putchar_fd.c ft_strjoin.c

OBJ = $(FCT:.c=.o)
$(NOM): $(OBJ)
	@ar -rc $(NOM) $(OBJ)

%.o : %.c $(HEADER)
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NOM)

re: fclean all
all: $(NOM)
