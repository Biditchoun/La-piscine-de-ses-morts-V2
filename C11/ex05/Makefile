SOURCES = main.c atoi_putnbr.c operations.c

OBJECTS = $(SOURCES:.c=.o)

FLAGS = -Wall -Werror -Wextra

COMPILER = cc

NAME = do-op

all: $(NAME)

$(NAME): $(OBJECTS)
	$(COMPILER) $(FLAGS) $(OBJECTS) -o $(NAME)

$(OBJECTS): %.o:%.c do_op.h
	$(COMPILER) $(FLAGS) -c $< -o $@

clean: 
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re : fclean all
