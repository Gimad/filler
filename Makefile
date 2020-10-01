# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: icanker <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/14 12:57:19 by icanker           #+#    #+#              #
#    Updated: 2020/08/14 12:57:25 by icanker          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sberic.filler
LIBFT = libft/libft.a

FLAGS = -Wall -Wextra -Werror -O2

SRC_DIR = srcs
OBJ_DIR = obj

INCLUDE = -I./includes
INCLUDE += -I./libft

HEADERS = includes/filler.h
HEADERS += includes/get_next_line.h

SRCS = main.c algorithm.c extra.c read_all.c
SRCS += get_next_line.c

OBJS = $(SRCS:.c=.o)

SRCS_PATH = $(addprefix $(SRC_DIR)/,$(SRCS))
OBJS_PATH = $(addprefix $(OBJ_DIR)/,$(OBJS))

.PHONY: clean fclean all re make_lib

all: $(LIBFT) $(NAME)

$(LIBFT) : make_lib
	@mkdir -p $(OBJ_DIR)

make_lib:
	@make -C ./libft/

$(NAME): $(OBJS_PATH) $(LIBFT) $(HEADERS)
	$(CC) -o $@ $(OBJS_PATH) $(LIBFT) $(INCLUDE)
	cp $(NAME) players

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c $(HEADERS) Makefile
	$(CC) -o $@ -c $< $(INCLUDE) $(FLAGS)

clean:
	@rm -rf $(OBJ_DIR)
	@make -C ./libft/ clean

fclean: clean
	@rm -f $(NAME)
	@make -C ./libft/ fclean

re: fclean all

.PHONY: make_lib clean fclean re