# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/04 12:55:12 by iel-mach          #+#    #+#              #
#    Updated: 2021/11/06 19:31:04 by iel-mach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
INC = ./
SRC = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlcpy.c ft_strlen.c ft_tolower.c ft_toupper.c ft_strlcat.c ft_atoi.c ft_bzero.c ft_memset.c ft_strchr.c ft_strncmp.c ft_strrchr.c ft_memcpy.c ft_putchar_fd.c ft_memmove.c
FLAGS = -Wall -Wextra -Werror
ARG = -c
OUT = *.o

all: 
	$(CC) $(ARG) $(FLAGS) $(SRC)
	 ar -rc $(NAME) $(OUT)
clean:
	rm *.o
fclean:
	rm -f $(NAME)
	rm -f $(OUT)
re : fclean all