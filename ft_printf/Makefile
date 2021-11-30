NAME = libftprintf.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

FILE = ft_printf.c ft_putnbr_base.c

OBJS = ${FILE:.c=.o}





.c.o:
	${CC} ${CFLAGS} -I . -c $< -o ${<:.c=.o}

all: ${NAME}

$(NAME): ${OBJS}
	${MAKE} -C ./libft
	cp ./libft/libft.a ${NAME}
	ar -rcs ${NAME} ${OBJS}

clean:
	${MAKE} clean -C ./libft 
	rm -rf $(OBJS)

fclean: clean
	${MAKE} fclean -C ./libft 
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY: re all clean fclean