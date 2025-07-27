SOURCES = main.c error_handling.c check_string.c check_keys.c handle_dict.c utils.c print_number.c print_number2.c

OBJECTS = $(SOURCES:.c=.o)

FLAGS = -Wall -Werror -Wextra

COMPILER = cc

NAME = rush-02

all: $(NAME)

$(NAME): $(OBJECTS)
	$(COMPILER) $(FLAGS) $(OBJECTS) -o $(NAME)

$(OBJECTS): %.o:%.c rush02.h
	$(COMPILER) $(FLAGS) -c $< -o $@

clean: 
	rm $(OBJECTS)

fclean: clean
	rm $(NAME)

re : fclean all
