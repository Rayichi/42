NAME = Prout

OBJDIR = ./obj/

SRCDIR = ./src/

SRC = caca.c bito.c

OBJ = ./obj/caca.o ./obj/bito.o



 $(OBJDIR)%.o: $(SRCDIR)%.c Makefile includes/caca.h
	gcc -I ./includes -c $< -o $@

all: ${NAME}

${NAME} : ${OBJ} $(OBJDIR)
	gcc $(OBJ) -o ${NAME}

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY: re all clean fclean