NAME = libftprintf.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

LIBFT = libft/libft.a

SRCS = push_swap.c \
	main.c\
	clear.c\
	push_swap_utils.c\
	check.c

SRCS_DIR = src/

OBJS = ${SRCS:.c=.o}

OBJS_DIR = obj/

OBJ = ${addprefix ${OBJS_DIR}, ${OBJS}}



${OBJS_DIR}%.o: ${SRCS_DIR}%.c includes/push_swap.h Makefile
	${CC} ${CFLAGS} -I includes/ -c $< -o ${<:.c=.o}

all: ${NAME}

$(NAME): ${OBJ}
	@make -C ./libft
	${CC} ${FLAGS} ${NAME} ${OBJ} ${LIBFT}

clean:
	@make clean -C ./libft 
	rm -rf $(OBJS)

fclean: clean
	@make fclean -C ./libft 
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY: re all clean fclean