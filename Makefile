# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/04 12:55:12 by iel-mach          #+#    #+#              #
#    Updated: 2021/11/13 18:28:36 by iel-mach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
SRC = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlcpy.c ft_strlen.c ft_tolower.c ft_toupper.c ft_strlcat.c ft_atoi.c ft_bzero.c ft_memset.c ft_strchr.c ft_strncmp.c ft_strrchr.c ft_memcpy.c ft_putchar_fd.c ft_memmove.c ft_strdup.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_calloc.c ft_substr.c ft_putstr_fd.c ft_strjoin.c ft_putnbr_fd.c ft_putendl_fd.c ft_itoa.c ft_strtrim.c ft_strmapi.c ft_striteri.c ft_split.c
OBJS = ${SRC:.c=.o}
FLAGS = -Wall -Wextra -Werror
ARG = -c

all : $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)
	
$(OBJS):
	$(CC) $(FLAGS) $(SRC) $(ARG)

clean : 
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re: fclean all
