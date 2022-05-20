NAME = push_swap

CC = gcc

FLAGS = -Wall -Wextra -Werror

LIB = ./libft/libft.h

SRCDIR = ./src/

SRC = main.c push_swap.c push_swap_utils.c check.c

OBJDIR = obj/

OBJ = $($(SRC):.c=.o)

INCLUDES = ./includes/


 $(OBJDIR)%.o: $(SRCDIR)%.c Makefile $(INCLUDES)/push_swap.h
	$(CC) $(FLAGS) -I ./includes -c $< -o $@

all : ${NAME}

${NAME} : $(OBJDIR)$(OBJ)
	@make -C libft/
	${CC} ${CFLAGS} -I ${INCLUDES} -o ${NAME} $(OBJDIR)$(OBJ) ${LIB} 

clean :
	@make clean -C ./libft/
	@make clean -C $(OBJDIR)$(OBJ)

fclean :
	@make fclean -c ./libft/
	@make fclean -C ./src/
	rm -rf ${NAME}


re : fclean
	${NAME}

.PHONY: re all clean fclean