NAME		= libft.a

CC 			= gcc
CFLAGS 		=  -Wall -Wextra -Werror

SRC_DIR			= srcs/
SRC_NAMES 	=  	ft_atoi.c   \
				ft_isalnum.c \
				ft_isascii.c \
				ft_islower.c \
				ft_isupper.c \
				ft_memchr.c  \
				ft_memcpy.c  \
				ft_memset.c  \
				ft_strchr.c  \
				ft_strcpy.c  \
				ft_strlcat.c \
				ft_strncat.c \
				ft_strncpy.c \
				ft_strrchr.c \
				ft_tolower.c \
				ft_bzero.c \
				ft_isalpha.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_memccpy.c \
				ft_memcmp.c  \
				ft_memmove.c \
				ft_strcat.c  \
				ft_strcmp.c  \
				ft_strdup.c  \
				ft_strlen.c  \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_strstr.c  \
				ft_toupper.c
				
	
SRCS		=	$(SRC_NAMES)

OBJ_DIR		= objs/
OBJ_NAMES	= $(SRC_NAMES:.c=.o)
OBJS		=  $(OBJ_NAMES)

HEADER		= libft.h

RM			= rm -rf

all: $(NAME) $(HDRS)

$(NAME): $(OBJ_DIR) $(OBJS) $(HEADER)
			ar rcs $@ $(OBJS)

$(OBJ_DIR):
		mkdir $@

$(OBJ_DIR)%.o: %.c $(HEADER)
			$(CC) $(CFLAGS) -c $< -o $@

clean: 
			$(RM) $(OBJ_DIR)

fclean: clean
			rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
