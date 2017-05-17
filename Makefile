# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/21 08:29:58 by jlagneau          #+#    #+#              #
#    Updated: 2017/05/17 04:10:00 by jlagneau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#
# Variables
#

# Name of the library
NAME       = libft.a
DEB_NAME   = libft_debug.a
TEST_NAME  = test

# Exec
CC        ?= gcc
AR         = ar
RM         = rm -rf

# Directories
SRCS_PATH  = src
HEAD_PATH  = include

BUILD_DIR  = build
OBJS_PATH  = $(BUILD_DIR)/obj
DEPS_PATH  = $(BUILD_DIR)/dep

TEST_PATH  = tests

# Flags
CFLAGS    ?= -Wall -Wextra -Werror
CPPFLAGS  += -I$(HEAD_PATH)
DEPSFLAGS  = -MMD -MF"$(subst $(OBJS_PATH),$(DEPS_PATH),$(@:.o=.d))"
ARFLAGS    = rcs

# Files
SRCS      := $(shell find src -type f)
SRCS_SUB  := $(subst $(SRCS_PATH),, $(shell find src -mindepth 1 -type d))

OBJS      := $(subst $(SRCS_PATH), $(OBJS_PATH), $(SRCS:.c=.o))
DEPS      := $(subst $(SRCS_PATH), $(DEPS_PATH), $(SRCS:.c=.d))

DEB_OBJS  := $(OBJS:.o=_debug.o)
DEB_DEPS  := $(DEPS:.d=_debug.d)

#
# Macro
#

define COMPILE
$(CC) $(CFLAGS) $(CPPFLAGS) $(DEPSFLAGS) -c $< -o $@
endef

define MAKETEST
@$(MAKE) -C $(TEST_PATH) $(1)
endef

define LINK
$(AR) $(ARFLAGS) $@ $^
ranlib $@
endef

#
# Rules
#

# Phony
.PHONY: all clean fclean norme re redebug

# Rules
$(NAME): CFLAGS += -O3
$(NAME): $(OBJS)
	$(LINK)

$(DEB_NAME): CFLAGS += -g3
$(DEB_NAME): $(DEB_OBJS)
	$(LINK)

$(OBJS): | $(OBJS_PATH) $(DEPS_PATH)
$(DEB_OBJS): | $(OBJS_PATH) $(DEPS_PATH)

$(OBJS_PATH):
	mkdir -p $(OBJS_PATH) $(addprefix $(OBJS_PATH), $(SRCS_SUB))

$(DEPS_PATH):
	mkdir -p $(DEPS_PATH) $(addprefix $(DEPS_PATH), $(SRCS_SUB))

$(OBJS_PATH)%.o: $(SRCS_PATH)%.c
	$(COMPILE)

$(OBJS_PATH)%_debug.o: $(SRCS_PATH)%.c
	$(COMPILE)

debug: $(DEB_NAME)

all: $(NAME)

clean:
	$(call MAKETEST, clean)
	$(RM) $(BUILD_DIR)

fclean:
	$(call MAKETEST, fclean)
	$(RM) $(BUILD_DIR) $(NAME) $(DEB_NAME) $(TEST_NAME)

re: | fclean
	@$(MAKE) all

redebug: | fclean
	@$(MAKE) debug

test: all
	$(MAKETEST)
	@ln -sf tests/test $(TEST_NAME)

-include $(DEPS)
-include $(DEB_DEPS)
