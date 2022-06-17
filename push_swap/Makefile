# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yfrancoi <yfrancoi@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/10 17:19:35 by yfrancoi          #+#    #+#              #
#    Updated: 2022/06/10 17:19:35 by yfrancoi         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc

FLAGS = -Wall -Wextra -Werror

LIBFT = libft/libft.a

SRCS =pa.c\
	pb.c\
	ra.c\
	rb.c\
	rr.c\
	rra.c\
	rrb.c\
	rrr.c\
	sa.c\
	sb.c\
	ss.c\
	rotate.c\
	reverse_rotate.c\
	ft_swap.c\
	push_swap.c \
	main.c\
	clear.c\
	check.c\
	verif.c\
	mini_algo.c\
	radix.c\

SRCS_DIR = src/

OBJS = ${SRCS:.c=.o}

OBJS_DIR = obj/

OBJ = ${addprefix ${OBJS_DIR}, ${OBJS}}



${OBJS_DIR}%.o: ${SRCS_DIR}%.c includes/push_swap.h Makefile
	${CC} ${CFLAGS} -I includes/ -c $< -o $@

all: ${NAME}

$(NAME): ${OBJ}
	@make -C ./libft
	${CC} ${FLAGS} -o ${NAME} ${OBJ} ${LIBFT}

clean:
	@make clean -C ./libft 
	rm -rf $(OBJ)

fclean: clean
	@make fclean -C ./libft 
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY: re all clean fclean