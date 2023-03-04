# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/15 22:28:52 by psaeyang          #+#    #+#              #
#    Updated: 2023/01/23 21:12:03 by psaeyang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = gcc
CFLAGS = -Wall -Werror -Wextra -g3
NAME = libft.a
SRC = ft_isalnum.c \
      ft_isalpha.c \
      ft_isascii.c \
      ft_isdigit.c \
      ft_isprint.c \
      ft_tolower.c \
      ft_toupper.c \
      ft_strlen.c \
      ft_strlcpy.c \
      ft_strlcat.c \
      ft_strrchr.c \
      ft_strchr.c \
      ft_strncmp.c \
      ft_memset.c \
      ft_bzero.c	\
      ft_memcpy.c \
      ft_memmove.c \
      ft_memchr.c \
      ft_memcmp.c \
      ft_atoi.c \
      ft_strnstr.c \
      ft_strdup.c \
      ft_calloc.c \
      ft_substr.c \
      ft_strjoin.c \
      ft_itoa.c \
      ft_strtrim.c \
      ft_striteri.c \
      ft_strmapi.c \
      ft_putchar_fd.c \
      ft_putendl_fd.c \
      ft_putnbr_fd.c \
      ft_putstr_fd.c \
      ft_split.c \
      get_next_line_bonus.c \
      get_next_line_utils_bonus.c

BONUS_SRC = ft_lstnew.c \
	    ft_lstadd_front.c \
	    ft_lstsize.c \
	    ft_lstlast.c \
	    ft_lstadd_back.c \
	    ft_lstdelone.c \
	    ft_lstclear.c \
	    ft_lstiter.c \
	    ft_lstmap.c \

OBJS = $(SRC:.c=.o)

OBJSB  = $(BONUS_SRC:.c=.o)

all: $(NAME)

%o: %c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS) $(OBJSB)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(OBJSB)
	ar -rcs $(NAME) $(OBJSB)
.PHONY: all clean fclean re
