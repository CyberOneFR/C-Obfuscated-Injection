# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ethebaul <ethebaul@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/13 15:23:18 by ethebaul          #+#    #+#              #
#    Updated: 2026/01/19 19:59:30 by ethebaul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BUILD_DIR			=	build

HEADERS				=	

SRCS				=	main.c

INCLUDES			=	$(addprefix -I, $(dir $(HEADERS)))
GCC_OBJS			=	$(addprefix $(BUILD_DIR)/, $(SRCS:.c=_gcc.o))
GCC_DEPS			=	$(OBJS:_gcc.o=.d)
CLANG_OBJS			=	$(addprefix $(BUILD_DIR)/, $(SRCS:.c=_clang.o))
CLANG_DEPS			=	$(OBJS:_clang.o=.d)

GCC					=	gcc
CLANG				=	clang
CFLAGS				=	-Wall -Wextra -Werror

GCC_NAME			=	gcc.out
CLANG_NAME			=	clang.out

all: $(GCC_NAME) $(CLANG_NAME)

$(GCC_NAME): $(GCC_OBJS)
	$(GCC) $(CFLAGS) $(INCLUDES) -o $@ $(GCC_OBJS)

$(CLANG_NAME): $(CLANG_OBJS)
	$(CLANG) $(CFLAGS) $(INCLUDES) -o $@ $(CLANG_OBJS)

$(BUILD_DIR)/%_gcc.o: %.c
	@mkdir -p $(dir $@)
	$(GCC) $(CFLAGS) $(INCLUDES) -MD -MP -c $< -o $@

$(BUILD_DIR)/%_clang.o: %.c
	@mkdir -p $(dir $@)
	$(CLANG) $(CFLAGS) $(INCLUDES) -MD -MP -c $< -o $@

clean:
	@rm -rf $(BUILD_DIR)

fclean: clean
	@rm -f $(GCC_NAME) $(CLANG_NAME)

re: fclean all

-include $(GCC_DEPS) $(CLANG_DEPS)

.PHONY : all clean fclean re