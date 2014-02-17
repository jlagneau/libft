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
HEADER    = 
$(info :: Static library $(NAME))

ISGIT    := $(shell find . -name ".git" -type d)
ifneq (, $(strip $(ISGIT)))
	VER   := $(shell git describe --tags `git rev-list --tags --max-count=1`)
	GDATE := $(shell git show -s --format="%ci" HEAD)
endif
DIR_PATH := $(shell pwd)

LIB_PATH  = /usr/lib
INC_PATH  = /usr/include

DEBUG     = no

OBJS_PATH = bin/objects/
SRCS_PATH = sources/
HEAD_PATH = includes/

CC        = gcc
CFLAGS    = -I$(HEAD_PATH) -Wall -Wextra -Werror -pedantic -ansi

AR        = ar
ARFLAGS   = rcs

RM        = rm
RMFLAGS   = -f

SRCS     := $(shell find sources -type f | tr "\n" " ")
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
$(NAME): $(OBJS)
	@printf "[\033[32mDONE\033[0m]\n"
	@printf "[\033[36m%s\033[0m] Linking and indexing" $(NAME)
	@$(AR) $(ARFLAGS) $@ $^
	@ranlib $@
	@printf " [\033[32mDONE\033[0m]\n"

$(OBJS_PATH)%.o: $(SRCS_PATH)*/%.c
	@if [ ! -d $(OBJS_PATH) ]; then \
	printf "[\033[36m%s\033[0m] Building library     " $(NAME); \
	mkdir -p $(OBJS_PATH); \
	fi;
	@$(CC) $(CFLAGS) -c $< -o $@

debug: CFLAGS += -g3
debug: DEBUG = yes
debug: all

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
	@if [ -d $(OBJS_PATH) ]; then \
	rmdir $(OBJS_PATH); \
	fi;
	@printf "    [\033[32mDONE\033[0m]\n"

fclean: clean
	@printf "[\033[36m%s\033[0m] Removing binary " $(NAME)
	@$(RM) $(RMFLAGS) $(NAME)
	@printf "     [\033[32mDONE\033[0m]\n"

re: fclean all

.PHONY: debug redebug install uninstall all clean fclean re
