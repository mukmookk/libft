# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youngmki <youngmki@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/03 16:55:11 by youngmki          #+#    #+#              #
#    Updated: 2021/05/04 19:48:52 by youngmki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SUFFIXES 	= .c.o
CC 		= gcc
 
CFLAGS 		=  -Wall -Wextra -Werror
NAME		= libft.a

SRCS_1 		=  	ft_memset.c			\
				ft_bzero.c				\
				ft_memcpy.c				\	
				ft_memccpy.c				\
				ft_memmove.c				\
				ft_memchr.c				\
				ft_memcmp.c				\
				ft_strlen.c				\
				ft_strlcpy.c				\
				ft_strlcat.c				\
				ft_strchr.c				\
				ft_strrchr.c				\
				ft_strnstr.c				\
				ft_strncmp.c				\
				ft_atoi.c				\
				ft_isalpha.c				\
				ft_isdigit.c				\
				ft_isalnum.c				\
				ft_isascii.c				\
				ft_isprint.c				\
				ft_toupper.c				\
				ft_tolower.c				\
	
SRCS		=	$(SRCS_1)

OBJS		= 	$(SRCS:.c=.o)

RM			= 	rm -rf

AR			= 	ar
ARFLAGS		= 	crs


all			: 	$(NAME)

%.o			:	%.c
	$(CC) $(CFLAGS)	-c $(OBJS) $< -o $@

clean		: 
			$(RM) $(OBJS)


$(NAME)		: $(OBJS)
			$(AR) $(ARFLAGS) $@ $ˆ
			
fclean		:
			$(RM) $(NAME)

re			: fclean all


.PHONY		: all clean fclean re