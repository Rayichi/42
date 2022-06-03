NAME = libft.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

UTILS = $(addprefix ./utils/, $(addprefix ft_, atoi bzero calloc isalpha isalnum \
	isdigit isascii isprint memcmp memcpy memmove memset strchr strdup \
	strlcat strlcpy strlen strncmp strnstr strrchr tolower toupper \
	putchar_fd putnbr_fd putstr_fd putendl_fd itoa split memchr strmapi \
	strjoin substr striteri strtrim)\
	$(addsuffix .c, ft_lstmap ft_lstnew ft_lstadd_front \
	ft_lstsize ft_lstlast ft_lstadd_back ft_lstdelone \
	ft_lstclear ft_lstiter) ft_printf.c ft_printf_utils.c get_next line.c\
	get_next_line_utils.c)

FILES = $(addprefix ./src/, push_swap.c push_swap_utils.c main.c)

SRCS = $(FILES) $(UTILS)

OBJ = ${SRCS:.c=.o}

%.o: %.c includes/libft.h Makefile
	${CC} ${CFLAGS} -I ./includes -c $< -o ${<:.c=.o}

all: ${NAME}

$(NAME): ${OBJS}
	ar r ${NAME} ${OBJS}

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY: re all clean fclean