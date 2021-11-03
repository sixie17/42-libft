# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysakine <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/02 17:43:03 by ysakine           #+#    #+#              #
#    Updated: 2021/11/03 12:12:30 by ysakine          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

objects = ft_atoi.o    ft_calloc.o  ft_isalnum.o ft_isdigit.o ft_memchr.o  \
		  ft_memmove.o ft_strchr.o  ft_strlcat.o ft_strlen.o  ft_strnstr.o ft_tolower.o \
		  ft_bzero.o   ft_isacii.o  ft_isalpha.o ft_isprint.o ft_memcpy.o  ft_memset.o  \
		  ft_strdup.o  ft_strlcpy.o ft_strncmp.o ft_strrchr.o ft_toupper.o
cc = gcc
NAME = libft.a
FLAGS = -Wall -Wextra -Werror

${NAME}: ${objects}
	${cc} -c ${FLAGS} *.c
	ar rc libft.a *.o
ft_atoi.o : ft_atoi.c
	${cc} -c ${FLAGS} ft_atoi.c
ft_memchr.o : ft_memchr.c
	${cc} -c ${FLAGS} ft_memchr.c
