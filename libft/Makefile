NAME = libft.a

CC = gcc

FLAGS = -wall -Wextra -Werror

FILE = $(addsuffix .c, atoi bzero calloc isalpha isalnum isdigit isascii isprint memccpy memcmp memcpy memmove memset strchr strdup strlcat strlcpy strlen strncmp strnstr strrchr tolower toupper putchar_fd putstr_fd putendl_fd itoa)

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