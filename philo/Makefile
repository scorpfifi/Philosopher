NAME	=	philo

CC		=	gcc -g

RM		=	rm -f

SRC		=	main.c check_error.c utils.c init.c

OBJ		= 	${SRC:.c=.o}


FLAGS	= -Wall -Wextra -Werror

INCLUDE = -L libft -lft

.c.o:
	${CC} -c $< -o ${<:.c=.o}

${NAME}: ${OBJ}
		make -C libft
		${CC} ${FLAGS} ${OBJ} -o ${NAME} ${INCLUDE}
all: ${NAME}

clean:
		${RM} ${OBJ}
		@cd libft && $(MAKE) clean

fclean: clean
		${RM} ${NAME}
		@cd libft && $(MAKE) fclean

re: clean all

.PHONY: all clean fclean re

