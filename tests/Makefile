#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/21 08:29:58 by jlagneau          #+#    #+#              #
#    Updated: 2017/05/17 04:16:15 by jlagneau         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

#
# Variables
#

# Name of the executable
NAME       = test

# Exec
CC        ?= gcc
RM         = rm -rf

# Directories
LIBFT_PATH = ..

SRCS_PATH  = src
OBJS_PATH  = build/obj
DEPS_PATH  = build/dep

HEADERS    = include $(LIBFT_PATH)/include

# Flags
CFLAGS    ?= -Wall -Wextra -Werror
CPPFLAGS  += $(addprefix -I, $(HEADERS))
LDFLAGS   += -L$(LIBFT_PATH)
DEPSFLAGS  = -MMD -MF"$(subst $(OBJS_PATH),$(DEPS_PATH),$(@:.o=.d))"

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

define LINK
$(CC) $^ $(LDFLAGS) -o $@
endef

#
# Rules
#

# Phony.
.PHONY: all clean debug fclean re redebug

# Link the main executable.
$(NAME): CFLAGS += -O3
$(NAME): LDFLAGS += -lft
$(NAME): $(OBJS)
	$(LINK)

# Link the debug executable.
$(DEB_NAME): CFLAGS += -g3
$(DEB_NAME): LDFLAGS += -lft_debug
$(DEB_NAME): $(DEB_OBJS)
	$(LINK)

$(OBJS): | $(OBJS_PATH) $(DEPS_PATH)
$(DEB_OBJS): | $(OBJS_PATH) $(DEPS_PATH)

$(OBJS_PATH):
	mkdir -p $(OBJS_PATH) $(addprefix $(OBJS_PATH), $(SRCS_SUB))

$(DEPS_PATH):
	mkdir -p $(DEPS_PATH) $(addprefix $(DEPS_PATH), $(SRCS_SUB))

# Compile the objects.
$(OBJS_PATH)%.o: $(SRCS_PATH)%.c
	$(COMPILE)

# Compile the debug objects.
$(OBJS_PATH)%_debug.o: $(SRCS_PATH)%.c
	$(COMPILE)

# Make all.
all: $(NAME)

# Make debug
debug: $(DEB_NAME)

# Remove the objects and dependencies files.
clean:
	$(RM) build

# Remove the object, dependencies and executables files.
fclean:
	$(RM) build $(NAME) $(DEB_NAME)

# Clean and rebuild the executable.
re: | fclean
	@$(MAKE) all

# Clean and rebuild the debug executable.
redebug: | fclean
	@$(MAKE) debug

# Include dependencies for objects.
-include $(DEPS)
-include $(DEB_DEPS)
