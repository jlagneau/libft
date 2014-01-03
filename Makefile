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
NAME      = libft.a

ISGIT    := $(shell find . -name ".git")
# Uncomment line below for debug.
#$(warning $(ISGIT))

ifneq (, $(strip $(ISGIT)))
	VERSION  := $(shell git describe --tags `git rev-list --tags --max-count=1`)
endif
# Uncomment line below for debug.
#$(warning $(VERSION))

DIR_PATH := $(shell pwd)
# Uncomment line below for debug.
#$(warning $(DIR_PATH))

SRCS_PATH = sources/
HEAD_PATH = includes/

CC        = gcc
CFLAGS    = -O3 -Wall -Wextra -Werror -pedantic -ansi -I$(HEAD_PATH)

AR        = ar
ARFLAGS   = rcs

RM        = rm
RMFLAGS   = -f

# Minimal sources
SRCS_LST  = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
            ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c \
            ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c \
            ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c \
            ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
            ft_isprint.c ft_toupper.c ft_tolower.c

# Custom sources
SRCS_LST += ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c \
            ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c \
            ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c \
            ft_itoa.c ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c \
            ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

# Bonus
SRCS_LST += ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c \
            ft_lstmap.c

# Personal sources
SRCS_LST += ft_isspace.c ft_stradel.c ft_stralen.c ft_strrealloc.c \
            ft_lstlen.c ft_lstlast.c ft_lstaddend.c get_next_line.c

OBJS      = $(addprefix $(SRCS_PATH), $(SRCS_LST:.c=.o))
SRCS      = $(addprefix $(SRCS_PATH), $(SRCS_LST))

# Print informations about the library
$(info # Start building static library $(NAME))
ifneq (, $(strip $(VERSION)))
$(info # Version : $(VERSION))
else
$(info # $(DIR_PATH) is not a proper git repository)
endif

# Rules
$(NAME): $(OBJS)
	@printf "[\033[32mDONE\033[0m]\n"
	@printf "[\033[36mlibft.a\033[0m] Linking and indexing"
	@$(AR) $(ARFLAGS) $@ $^
	@ranlib $@
	@printf " [\033[32mDONE\033[0m]\n"

$(SRCS_PATH)%.o: $(SRCS_PATH)%.c
	@if [ ! -e $(SRCS_PATH)ft_memset.o ]; then \
	printf "[\033[36mlibft.a\033[0m] Building library     "; \
	fi;
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	@printf "[\033[36mlibft.a\033[0m] Removing objects "
	@$(RM) $(RMFLAGS) $(OBJS)
	@printf "    [\033[32mDONE\033[0m]\n"

fclean: clean
	@printf "[\033[36mlibft.a\033[0m] Removing binary "
	@$(RM) $(RMFLAGS) $(NAME)
	@printf "     [\033[32mDONE\033[0m]\n"

re: fclean all

.PHONY: all clean fclean re
