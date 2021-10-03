NAME = libft.a

CC = gcc

FLAGS = -wall -Wextra -Werror

FILE = *.c

SRCS = $(addprefix ft_, $(FILE))

OBJS = ${SRCS:.c=.o}





.c.o:
	${CC} ${CFLAGS} -I . -c $< -o ${<:.c=.o}

all: ${NAME}

$(NAME): ${OBJS}
	ar r ${NAME} ${OBJS}

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY: re all clean fclean