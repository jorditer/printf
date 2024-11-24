NAME = libftprintf.a

SRCS = ft_printf.c ft_putchar.c \
		ft_puthex.c ft_putnbr.c ft_putpointer.c \
		ft_putunsigned.c ft_putstr.c ft_strcpy.c

OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror -fPIC

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	gcc -c $(CFLAGS) $(SRCS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME:.c=.o)
	rm -f $(NAME:.c=.so)

re: fclean all

so:
	gcc  -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)