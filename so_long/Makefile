NAME = so_long

CC = gcc

FLAGS = -Wall -Wextra -Werror

FILE = 

OBJS = ${FILE:.c=.o}





%.o: %.c so_long.h Makefile
	${CC} ${CFLAGS} -I . -c $< -o ${<:.c=.o}

all: ${NAME}

$(NAME): ${OBJS}
	${MAKE} -C ./libft
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
	${MAKE} clean -C ./libft
	rm -rf $(OBJS)

fclean: clean
	${MAKE} fclean -C ./libft 
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY: re all clean fclean