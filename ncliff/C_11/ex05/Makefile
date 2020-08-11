
SRCS	= do_op.c ft_putnbr.c math_arg.c

LIBR	= my_math.h

OBJS	= ${SRCS:.c=.o}

NAME	= do-op

CC		= gcc
RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS} -I ${LIBR}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

.PHONY:		all clean fclean
