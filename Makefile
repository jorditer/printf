NAME = libftprintf.a

SRCS = ft_printf.c ft_putchar.c \
		ft_puthex.c ft_putnbr.c ft_putpointer.c \
		ft_putunsigned.c ft_putstr.c ft_strcpy.c

OBJS = $(SRCS:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJS)
	@ar -crs $(NAME) $(OBJS)
	@echo "Created  $(NAME)"

%.o: %.c ft_printf.h Makefile
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled $<"

all: $(NAME)

clean:
	@rm -f $(OBJS)
	@echo "Cleaned .o's"

fclean: clean
	@rm -f $(NAME)
	@rm -f libft.so
	@echo "Cleaned .o's and ${NAME}"

re: fclean all
	@echo "Cleaned"
