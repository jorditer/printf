NAME = libftprintf.a

SRCS = ft_printf.c ft_putchar.c \
		ft_puthex.c ft_putnbr.c ft_putpointer.c \
		ft_putunsigned.c ft_putstr.c ft_strcpy.c

OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)
	rm -f $(NAME)

fclean: clean
	rm -f libft.so

re: fclean all

so: ${OBJS}
	gcc -shared -o libft.so $(OBJS)