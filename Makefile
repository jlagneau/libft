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
$(info :: Static library $(NAME))

ISGIT    := $(shell find . -name ".git")
ifneq (, $(strip $(ISGIT)))
	VER   := $(shell git describe --tags `git rev-list --tags --max-count=1`)
	GDATE := $(shell git show -s --format="%ci" HEAD)
endif
DIR_PATH := $(shell pwd)

DEBUG     = no

OBJS_PATH = objects/
SRCS_PATH = sources/
HEAD_PATH = includes/

CC        = gcc
CFLAGS    = -Wall -Wextra -Werror -pedantic -ansi -I$(HEAD_PATH)

AR        = ar
ARFLAGS   = rcs

RM        = rm
RMFLAGS   = -rf

SRCS_LST := $(shell find sources -type f -exec basename {} \; | tr "\n" " ")
OBJS      = $(addprefix $(OBJS_PATH), $(SRCS_LST:.c=.o))
SRCS      = $(addprefix $(SRCS_PATH), $(SRCS_LST))

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
	@printf "[\033[36mlibft.a\033[0m] Linking and indexing"
	@$(AR) $(ARFLAGS) $@ $^
	@ranlib $@
	@printf " [\033[32mDONE\033[0m]\n"

$(OBJS_PATH)%.o: $(SRCS_PATH)%.c
	@if [ ! -e $(OBJS_PATH) ]; then \
	printf "[\033[36mlibft.a\033[0m] Building library     "; \
	mkdir -p $(OBJS_PATH); \
	fi;
	@$(CC) $(CFLAGS) -c $< -o $@

debug: CFLAGS += -g3
debug: DEBUG = yes
debug: all

redebug: fclean debug

all: $(NAME)

clean:
	@printf "[\033[36mlibft.a\033[0m] Removing objects "
	@$(RM) $(RMFLAGS) $(OBJS)
	@$(RM) $(RMFLAGS) $(OBJS_PATH)
	@printf "    [\033[32mDONE\033[0m]\n"

fclean: clean
	@printf "[\033[36mlibft.a\033[0m] Removing binary "
	@$(RM) $(RMFLAGS) $(NAME)
	@printf "     [\033[32mDONE\033[0m]\n"

re: fclean all

.PHONY: all clean fclean re
