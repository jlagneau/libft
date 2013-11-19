#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/19 13:25:04 by jlagneau          #+#    #+#              #
#    Updated: 2013/11/19 16:11:19 by jlagneau         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

# Variables
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I.

AR = ar
ARFLAGS = rcs

RM = rm
RMFLAGS = -f

NAME = libft.a

# Sources
SRCS = ./ft_strlen.c \
	   ./ft_memalloc.c \
	   ./ft_putchar.c \
	   ./ft_putstr.c \
	   ./ft_putendl.c \
	   ./ft_putnbr.c \
	   ./ft_putchar_fd.c \
	   ./ft_putstr_fd.c \
	   ./ft_putendl_fd.c \
	   ./ft_putnbr_fd.c
OBJS = $(SRCS:.c=.o)

# Rules

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $@ $^
	ranlib $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(RMFLAGS) $(OBJS)

fclean: clean
	$(RM) $(RMFLAGS) $(NAME)

re: fclean all
