# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oiahidal <oiahidal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/14 18:11:06 by oiahidal          #+#    #+#              #
#    Updated: 2024/05/24 11:48:52 by oiahidal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Werror -Wextra

NAME = libft.a

SRCS = \
	ft_strchr.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_isascii.c \
	ft_strlen.c \
	ft_bzero.c \
	ft_strncmp.c \
	ft_isalnum.c \
	ft_strnstr.c \
	ft_isalpha.c \
	ft_strrchr.c \
	ft_isdigit.c \
	ft_tolower.c \
	ft_isprint.c \
	ft_toupper.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_atoi.c \
	 \
	ft_calloc.c \
	ft_strdup.c \
	 \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_striteri.c \
	ft_strmapi.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	
all: $(NAME)

AR = ar

ARFLAGS = rcs

OBJS = $(SRCS:.c=.o)

BONUS = \
	ft_lstnew_bonus.c \
	ft_lstadd_front_bonus.c \
	ft_lstsize_bonus.c \
	ft_lstlast_bonus.c \
	ft_lstadd_back_bonus.c \
	ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c \

BONUS_OBJS = $(BONUS:%.c=%.o)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

bonus: $(OBJECTS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJECTS) $(BONUS_OBJS)

.PHONY: all clean fclean re