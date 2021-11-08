# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysakine <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/02 17:43:03 by ysakine           #+#    #+#              #
#    Updated: 2021/11/08 11:46:19 by ysakine          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

src := ft_atoi.c ft_isalnum.c ft_isprint.c ft_memcpy.c ft_putendl_fd.c ft_strchr.c ft_strlcat.c ft_strncmp.c ft_substr.c\
ft_bzero.c ft_isalpha.c ft_itoa.c ft_memmove.c ft_putnbr_fd.c ft_strdup.c ft_strlcpy.c ft_strnstr.c ft_tolower.c\
ft_calloc.c ft_isascii.c ft_memchr.c ft_memset.c ft_putstr_fd.c ft_striteri.c ft_strlen.c ft_strrchr.c ft_toupper.c\
ft_isacii.c ft_isdigit.c ft_memcmp.c ft_putchar_fd.c ft_split.c ft_strjoin.c ft_strmapi.c ft_strtrim.c
src_b := ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
cc := gcc
NAME := libft.a
FLAGS := -Wall -Wextra -Werror
objects := ${src:.c=.o}
objects_b := ${src_b:.c=.o}

all: ${NAME}
${NAME}: ${objects}
	${cc} -c ${FLAGS} ${src}
	ar rc libft.a ${objects}
bonus: ${objects_b}
	${cc} -c ${FLAGS} ${src_b}
	ar rc libft.a ${objects_b}
%.o  : %.c
	${cc} -c ${FLAGS} $<
clean :
	rm -f ${objects} ${objects_b}
fclean : clean
	rm -f ${NAME}
re : fclean ${NAME}
