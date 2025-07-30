SOURCES = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OBJECTS = $(SOURCES:.c=.o)

FLAGS = -Wall -Werror -Wextra

COMPILER = cc

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

$(OBJECTS): %.o:%.c includes/ft.h
	$(COMPILER) $(FLAGS) -c $< -o $@ -I includes

clean: 
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
