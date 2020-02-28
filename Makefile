#!bin/bash

NAME = libftprintf.a

FILES = $(shell ls srcs | grep .c | cut -d "." -f 1)

SRCS = $(addprefix $(PATH_SRCS), $(addsuffix .c, $(FILES)))

PATH_INC = ./includes/

PATH_SRCS = ./srcs/

PATH_OBJ = ./obj/

OBJ = $(addprefix $(PATH_OBJ), $(addsuffix .o, $(FILES)))

INC = $(addprefix $(PATH_INC), ft_printf.h)

FLAGS = -Wall -Wextra -Werror

FL_DEBUG = -g -fsanitize=address

all: $(NAME)

$(NAME): $(PATH_OBJ) $(OBJ)
	@echo "creating printf library"
	    @ar rcs $(NAME) $(OBJ)


$(PATH_OBJ):
	    @mkdir obj
		    @echo "creating object directory"

$(PATH_OBJ)%.o: $(PATH_SRCS)%.c $(INC)
	    @gcc $(FLAGS) -g -o $@ -c $< -I $(INC)
		@#gcc $(FLAGS) -I $(PATH_INC)ft_printf.h -c $(PATH_SRCS)$*.c

clean:
	    @/bin/rm -f $(OBJ)
		    @echo "deleting object files"

fclean: clean
	    @/bin/rm -f $(NAME)
		    @echo "deleting libftprintf"

exec: re
	    @echo "creating executable"
		    @gcc -g -o ft_printf libftprintf.a main.c #les FLAGS a rajouter
			    @echo "------------------------------------------------------"

debug: re
	    @gcc $(FL_DEBUG) -o ft_printf libftprintf.a main.c #les FLAGS a rajouter
		    ./ft_printf

cexec: exec
	    ./ft_printf

dexec: exec
	    valgrind --leak-check=full --track-origins=yes ./ft_printf -g

clexec: fclean
	    @echo "deleting executable"
		    @rm  -f ft_printf

re: fclean all

.PHONY: all clean fclean re clexec
