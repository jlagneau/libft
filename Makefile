#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/21 08:29:58 by jlagneau          #+#    #+#              #
#    Updated: 2015/12/02 10:30:47 by jlagneau         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

# Variables
NAME      = libft.a
DEB_NAME  = libft_debug.a

# Directories
SRCS_PATH = src/
HEAD_PATH = include/

OBJS_PATH = .obj/
DEPS_PATH = .dep/

# Exec
CC        = gcc
AR        = ar
RM        = rm

# Flags
IFLAGS    = -I$(HEAD_PATH)
CFLAGS    = -Wall -Wextra -Werror -pedantic
DEPSFLAGS = -MMD -MF"$(DEPS_PATH)$(notdir $(@:.o=.d))"
RMFLAGS   = -rf
ARFLAGS   = rcs

# Files
SRCS     := $(shell find src -type f)
DEPS      = $(addprefix $(DEPS_PATH), $(notdir $(SRCS:.c=.d)))
OBJS      = $(addprefix $(OBJS_PATH), $(notdir $(SRCS:.c=.o)))
DEB_OBJS  = $(OBJS:.o=_debug.o)
DEB_DEPS  = $(DEB_OBJS:.o=.d)

# Rules
$(NAME): CFLAGS += -O3
$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $@ $^
	ranlib $@

$(DEB_NAME): CFLAGS += -g3
$(DEB_NAME): $(DEB_OBJS)
	$(AR) $(ARFLAGS) $@ $^
	ranlib $@

$(OBJS_PATH)%.o: $(SRCS_PATH)%.c
	@if [ ! -d $(OBJS_PATH) ]; then \
	mkdir -p $(OBJS_PATH); \
	mkdir -p $(DEPS_PATH); \
	fi;
	$(CC) $(IFLAGS) $(CFLAGS) $(DEPSFLAGS) -c $< -o $@

$(OBJS_PATH)%_debug.o: $(SRCS_PATH)%.c
	@if [ ! -d $(OBJS_PATH) ]; then \
	mkdir -p $(OBJS_PATH); \
	mkdir -p $(DEPS_PATH); \
	fi;
	$(CC) $(IFLAGS) $(CFLAGS) $(DEPSFLAGS) -c $< -o $@

debug: $(DEB_NAME)

norme:
	@norminette ./**/*.{h,c}

all: $(NAME)

clean:
	$(RM) $(RMFLAGS) $(OBJS_PATH) $(DEPS_PATH)

fclean:
	$(RM) $(RMFLAGS) $(OBJS_PATH) $(DEPS_PATH)
	$(RM) $(RMFLAGS) $(NAME) $(DEB_NAME)

re: fclean all

redebug: fclean debug

-include $(DEPS)
-include $(DEB_DEPS)

.PHONY: all clean fclean norme re redebug
