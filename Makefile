#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/21 08:29:58 by jlagneau          #+#    #+#              #
#    Updated: 2014/11/15 00:54:25 by jlagneau         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

# Variables
NAME      = libft.a
DEB_NAME  = libft_debug.a

$(info :: Static library F(orty)T(wo) $(NAME))

ISGIT    := $(shell find . -name ".git" -type d)
ifneq (, $(strip $(ISGIT)))
	VER   := $(shell git describe --tags `git rev-list --tags --max-count=1`)
	GDATE := $(shell git show -s --format="%ci" HEAD)
endif
DIR_PATH := $(shell pwd)

LIB_PATH  = /usr/lib
INC_PATH  = /usr/include

DEBUG     = no

OBJS_PATH = bin/
SRCS_PATH = src/
HEAD_PATH = include/

CC        = gcc
CFLAGS    = -I$(HEAD_PATH) -Wall -Wextra -Werror -pedantic -ansi

AR        = ar
ARFLAGS   = rcs

RM        = rm
RMFLAGS   = -rf

# Sources files (find src -type f | tr "\n" " " to get the list).
SRCS      = src/list/ft_lstdel.c src/list/ft_lstlast.c src/list/ft_lstaddend.c \
            src/list/ft_lstadd.c src/list/ft_lstnew.c src/list/ft_lstiter.c \
            src/list/ft_lstlen.c src/list/ft_lstdelone.c src/list/ft_lstmap.c \
            src/str/ft_isalpha.c src/str/ft_strsplit.c src/str/ft_strlcat.c \
            src/str/ft_strjoin.c src/str/ft_isalnum.c src/str/ft_strncpy.c \
            src/str/ft_strcmp.c src/str/ft_strsub.c src/str/ft_strequ.c \
            src/str/ft_strmap.c src/str/ft_itoa.c src/str/ft_strncmp.c \
            src/str/ft_isdigit.c src/str/ft_strdup.c src/str/ft_strmapi.c \
            src/str/ft_isprint.c src/str/ft_strdel.c src/str/ft_strcat.c \
            src/str/ft_strnew.c src/str/ft_strtrim.c src/str/ft_striteri.c \
            src/str/ft_strchr.c src/str/ft_strncat.c src/str/ft_stradel.c \
            src/str/ft_strlen.c src/str/ft_strstr.c src/str/ft_striter.c \
            src/str/ft_atoi.c src/str/ft_toupper.c src/str/ft_strrealloc.c \
            src/str/ft_tolower.c src/str/ft_strcpy.c src/str/ft_strrchr.c \
            src/str/ft_isspace.c src/str/ft_strnstr.c src/str/ft_strclr.c \
            src/str/ft_strnequ.c src/str/ft_isascii.c src/str/ft_stralen.c \
            src/mem/ft_memcpy.c src/mem/ft_memalloc.c src/mem/ft_memcmp.c \
            src/mem/ft_bzero.c src/mem/ft_memdel.c src/mem/ft_memccpy.c \
            src/mem/ft_memmove.c src/mem/ft_memset.c src/mem/ft_memchr.c \
            src/io/ft_putstr_fd.c src/io/ft_putstr.c src/io/ft_putendl.c \
            src/io/ft_putendl_fd.c src/io/get_next_line.c src/io/ft_putchar.c \
            src/io/ft_putnbr.c src/io/ft_putchar_fd.c src/io/ft_putnbr_fd.c
OBJS      = $(addprefix $(OBJS_PATH), $(notdir $(SRCS:.c=.o)))

# Print informations about the library
ifneq (, $(strip $(ISGIT)))
    $(info :: Version : $(VER))
    $(info :: Last modifications : $(GDATE))
endif

# Rules
ifneq (yes, $(DEBUG))
    $(NAME): CFLAGS += -O3
endif
$(NAME):
$(NAME): $(OBJS)
	@printf "[\033[32mDONE\033[0m]\n"
	@printf "[\033[36m%s\033[0m] Linking and indexing" $(NAME)
	@$(AR) $(ARFLAGS) $@ $^
	@ranlib $@
	@printf " [\033[32mDONE\033[0m]\n"

$(DEB_NAME): $(OBJS)
	@printf "[\033[32mDONE\033[0m]\n"
	@printf "[\033[36m%s\033[0m] Linking and indexing" $(NAME)
	@$(AR) $(ARFLAGS) $@ $^
	@ranlib $@
	@printf " [\033[32mDONE\033[0m]\n"

$(OBJS_PATH)%.o: $(SRCS_PATH)list/%.c
	@if [ ! -d $(OBJS_PATH) ]; then \
	printf "[\033[36m%s\033[0m] Building library     " $(NAME); \
	mkdir -p $(OBJS_PATH); \
	fi;
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJS_PATH)%.o: $(SRCS_PATH)mem/%.c
	@if [ ! -d $(OBJS_PATH) ]; then \
	printf "[\033[36m%s\033[0m] Building library     " $(NAME); \
	mkdir -p $(OBJS_PATH); \
	fi;
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJS_PATH)%.o: $(SRCS_PATH)io/%.c
	@if [ ! -d $(OBJS_PATH) ]; then \
	printf "[\033[36m%s\033[0m] Building library     " $(NAME); \
	mkdir -p $(OBJS_PATH); \
	fi;
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJS_PATH)%.o: $(SRCS_PATH)str/%.c
	@if [ ! -d $(OBJS_PATH) ]; then \
	printf "[\033[36m%s\033[0m] Building library     " $(NAME); \
	mkdir -p $(OBJS_PATH); \
	fi;
	@$(CC) $(CFLAGS) -c $< -o $@


debug: CFLAGS += -g3
debug: DEBUG = yes
debug: NAME = $(DEB_NAME)
debug: clean $(DEB_NAME)

redebug: CFLAGS += -g3
redebug: DEBUG = yes
redebug: NAME = $(DEB_NAME)
redebug: fclean debug

install:
	@if [ -e $(LIB_PATH)/$(NAME) ]; then \
	printf "[\033[36m%s\033[0m] Is already installed\n" $(NAME); \
	else \
	cp $(NAME) $(LIB_PATH); \
	cp $(HEAD_PATH)/$(HEADER) $(INC_PATH); \
	chown root:root $(LIB_PATH)/$(NAME); \
	chown root:root $(INC_PATH)/$(HEADER); \
	printf "[\033[36m%s\033[0m] Installed correctly\n" $(NAME); \
	fi;

uninstall:
	@if [ -e $(LIB_PATH)/$(NAME) ]; then \
	$(RM) $(RMFLAGS) $(LIB_PATH)/$(NAME); \
	$(RM) $(RMFLAGS) $(INC_PATH)/$(HEADER); \
	printf "[\033[36m%s\033[0m] Uninstalled correctly\n" $(NAME); \
	else \
	printf "[\033[36m%s\033[0m] Is not installed\n" $(NAME); \
	fi;

all: $(NAME)

clean:
	@printf "[\033[36m%s\033[0m] Removing objects " $(NAME)
	@$(RM) $(RMFLAGS) $(OBJS)
	@$(RM) $(RMFLAGS) $(OBJS_PATH)
	@printf "    [\033[32mDONE\033[0m]\n"

fclean: clean
	@printf "[\033[36m%s\033[0m] Removing binary " $(NAME)
	@$(RM) $(RMFLAGS) $(NAME)
	@$(RM) $(RMFLAGS) $(DEB_NAME)
	@printf "     [\033[32mDONE\033[0m]\n"

re: fclean all

.PHONY: debug redebug install uninstall check all clean fclean re
