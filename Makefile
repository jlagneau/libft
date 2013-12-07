#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/21 08:29:58 by jlagneau          #+#    #+#              #
#    Updated: 2013/12/02 19:21:41 by jlagneau         ###   ########.fr        #
#                                                                              #
#******************************************************************************#
# Variables
CC      = gcc
CFLAGS  = -O3 -Wall -Wextra -Werror -pedantic -ansi -I.

AR      = ar
ARFLAGS = rcs

RM      = rm
RMFLAGS = -f

NAME    = libft.a

# Mininmal sources
SRCS    = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
          ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c \
          ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c \
          ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c \
          ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
          ft_isprint.c ft_toupper.c ft_tolower.c
# Custom sources
SRCS   += ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c \
          ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c \
          ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c \
          ft_itoa.c ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c \
          ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
# Bonus
SRCS   += ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c \
          ft_lstmap.c
# Personal sources
SRCS   += ft_isspace.c ft_strarraydel.c ft_realloc.c

OBJS    = $(SRCS:.c=.o)

# Colors
RED     = \x1b[31m
GREEN   = \x1b[32m
RESET   = \x1b[0m

# Rules
$(NAME): compile $(OBJS)
	@echo "[$(NAME)]: $(GREEN)Linking library$(RESET)"
	@$(AR) $(ARFLAGS) $@ $(OBJS) 1> /dev/null
	@echo "[$(NAME)]: $(GREEN)Indexing library$(RESET)"
	@ranlib $@

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@ 1> /dev/null

all: $(NAME)

compile:
	@echo "[$(NAME)]: $(GREEN)Compiling objects$(RESET)"

clean:
	@echo "[$(NAME)]: $(RED)Removing objects$(RESET)"
	@$(RM) $(RMFLAGS) $(OBJS)

fclean: clean
	@echo "[$(NAME)]: $(RED)Removing library$(RESET)"
	@$(RM) $(RMFLAGS) $(NAME)

re: fclean all
