NAME = libft.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

FILE = $(addprefix ft_, atoi bzero calloc isalpha isalnum isdigit isascii isprint memccpy memcmp memcpy memmove memset strchr strdup strlcat strlcpy strlen strncmp strnstr strrchr tolower toupper putchar_fd putnbr_fd putstr_fd putendl_fd itoa split memchr strmapi strjoin substr striteri strtrim)

BONUS = $(addsuffix .c, ft_lstmap ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back ft_lstdelone ft_lstclear ft_lstiter)

BONUSO = ${BONUS:.c=.o}

SRCS = $(addsuffix .c, $(FILE))

OBJS = ${SRCS:.c=.o}





.c.o:
	${CC} ${CFLAGS} -I . -c $< -o ${<:.c=.o}

all: ${NAME}

$(NAME): ${OBJS}
	ar r ${NAME} ${OBJS}

bonus: ${BONUSO}
	ar r ${NAME} ${BONUSO} ${OBJ}

clean:
	rm -rf $(OBJS) $(BONUSO)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY: re all clean fclean