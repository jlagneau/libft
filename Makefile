# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/21 08:29:58 by jlagneau          #+#    #+#              #
#    Updated: 2017/04/08 13:47:04 by jlagneau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
NAME      = libft.a
DEB_NAME  = libft_debug.a

# Exec
CC       ?= gcc
AR        = ar
RM        = rm -rf

# Directories
SRCS_PATH = src/
HEAD_PATH = include/

OBJS_PATH = .obj/
DEPS_PATH = .dep/

# Flags
CFLAGS    += -Wall -Wextra -Werror
CPPFLAGS  += -I$(HEAD_PATH)
DEPSFLAGS += -MMD -MF"$(DEPS_PATH)$(notdir $(@:.o=.d))"
ARFLAGS    = rcs

# Files
SRCS     := $(shell find src -type f)
DEPS      = $(addprefix $(DEPS_PATH), $(notdir $(SRCS:.c=.d)))
OBJS      = $(addprefix $(OBJS_PATH), $(notdir $(SRCS:.c=.o)))

DEB_OBJS  = $(OBJS:.o=_debug.o)
DEB_DEPS  = $(DEPS:.d=_debug.d)

# Phony
.PHONY: all clean fclean norme re redebug

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
	@mkdir -p $(OBJS_PATH) $(DEPS_PATH)
	$(CC) $(CFLAGS) $(CPPFLAGS) $(DEPSFLAGS) -c $< -o $@

$(OBJS_PATH)%_debug.o: $(SRCS_PATH)%.c
	@mkdir -p $(OBJS_PATH) $(DEPS_PATH)
	$(CC) $(CFLAGS) $(CPPFLAGS) $(DEPSFLAGS) -c $< -o $@

debug: $(DEB_NAME)

norme:
	@norminette ./**/*.{h,c}

all: $(NAME)

clean:
	@make -C tests clean
	$(RM) $(OBJS_PATH) $(DEPS_PATH)

fclean:
	@make -C tests fclean
	$(RM) $(OBJS_PATH) $(DEPS_PATH)
	$(RM) $(NAME) $(DEB_NAME)

re: fclean all

redebug: fclean debug

test: all
	@make -C tests
	@./tests/test

-include $(DEPS)
-include $(DEB_DEPS)
