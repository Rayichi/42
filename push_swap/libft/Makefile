NAME = libft.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

UTILS = $(addprefix ./src/, $(addsuffix .c, $(addprefix ft_, atoi bzero calloc isalpha isalnum \
	isdigit isascii isprint memcmp memcpy memmove memset strchr strdup \
	strlcat strlcpy strlen strncmp strnstr strrchr tolower toupper \
	putchar_fd putnbr_fd putstr_fd putendl_fd itoa split memchr strmapi \
	strjoin substr striteri strtrim)\
	 ft_lstmap ft_lstnew ft_lstadd_front \
	ft_lstsize ft_lstlast ft_lstadd_back ft_lstdelone \
	ft_lstclear ft_lstiter))
GNL = get_next line.c\
	get_next_line_utils.c

GNLOBJ = $(GNL:.c=.o)

FTPRINTF = ft_printf.c \
	ft_printf_utils.c

FTPRINTFOBJ = $(GNL:.c=.o)

OBJ = ${UTILS:.c=.o}

obj/%.o: src/%.c includes/libft.h Makefile
	${CC} ${CFLAGS} -I ./includes -c $< -o ${<:.c=.o}

gnlobj/%.o:gnl/%.c includes/get_next_line.h Makefile
	${CC} ${CFLAGS} -I ./includes -c $< -o ${<:.c=.o}

ft_printf/%.o:printfobj/%.c includes/ft_printf.h Makefile

all: ${NAME}

$(NAME): ${OBJS} ${FTPRINTFOBJ} ${GNLOBJ}
	ar r ${NAME} ${OBJS} ${FTPRINTFOBJ} ${GNLOBJ}

clean:
	rm -rf $(OBJS) ${FTPRINTFOBJ} ${GNLOBJ}

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY: re all clean fclean