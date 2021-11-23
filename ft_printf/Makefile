NAME = libftprintf.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

FILE = ft_printf.c ft_putnbr_base.c

SRCS = $(addsuffix .c, $(FILE))

OBJS = ${SRCS:.c=.o}





.c.o:
	${CC} ${CFLAGS} -I . -c $< -o ${<:.c=.o}

all: ${NAME}

$(NAME): ${OBJS}
	ar r ${NAME} ${OBJS}

clean:
	rm -rf $(OBJS) $(BONUSO)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY: re all clean fclean