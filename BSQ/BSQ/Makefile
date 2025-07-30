# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/30 18:00:23 by sawijnbe          #+#    #+#              #
#    Updated: 2025/07/30 18:00:27 by sawijnbe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = main.c handle_input.c check_map.c fill_and_print_map.c find_biggest_square.c utils.c

OBJECTS = $(SOURCES:.c=.o)

FLAGS = -Wall -Werror -Wextra

COMPILER = cc

NAME = bsq

all: $(NAME)

$(NAME): $(OBJECTS)
	$(COMPILER) $(FLAGS) $(OBJECTS) -o $(NAME)

$(OBJECTS): %.o:%.c bsq.h
	$(COMPILER) $(FLAGS) -c $< -o $@

clean: 
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re : fclean all
