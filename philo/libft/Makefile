SRCS	= ft_isdigit.c ft_putstr_fd.c ft_putchar_fd.c ft_strlen.c ft_strncmp.c ft_strdup.c ft_atoi.c

OBJS	= ${SRCS:.c=.o}


NAME	= libft.a

CC		= gcc

RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

all:    ${NAME}

.c.o:
	${CC} ${CFLAGS} -c $< -o${<:.c=.o}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME} 

re : fclean all

bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS)
