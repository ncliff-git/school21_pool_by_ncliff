SRCS = srcs/algoritm.c, srcs/basic_func.c, srcs/ncliff_test.c, srcs/other_function.c, srcs/read_matrix.c, srcs/rec_matrix.c, srcs/test_argument.c, srcs/work_with_matrix.c, srcs/clean.c

OBJS = srcs/algoritm.o srcs/basic_func.o srcs/ncliff_test.o srcs/other_function.o srcs/read_matrix.o srcs/rec_matrix.o srcs/test_argument.o srcs/work_with_matrix.o srcs/clean.o

CC = gcc
RM = rm -f

NAME = BSQ

FLAGS = -Wall -Wextra -Werror -I includes/algoritm.h -o includes/ft_arg.h -o includes/matrix.h

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	${CC} -o ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: 	fclean all

.PHONY:
	all clean fclean re
