# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cjullien <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/24 18:18:01 by cjullien          #+#    #+#              #
#    Updated: 2020/08/24 22:05:17 by cjullien         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= do_op.c pick_op.c

OBJS	= ${SRCS:.c=.o}

NAME	= do-op

CC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:	clean
			${RM} ${NAME}

re:			fclean all

.PHONY: all clean fclean re
